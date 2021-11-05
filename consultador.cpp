#include "consultador.h"
#include "Constantes.h"

Consultador::Consultador()
{

}


QSqlQuery Consultador::QueryNormal(){

    QSqlQuery query;
    QString queryprevia = "SELECT pedidos.id,empresas.empresa , MAX(requerimientos.id) AS Requerimiento,MIN(requerimientos.estado), pedidos.FechaEntrega AS Entrega, comercial.DireccionEntrega, facturas.numero, facturas.estado, info.campo1,info.campo2,comercial.condicionespago,DATE_FORMAT(pedidos.fechacreacion,\"[%d/%m]\") FROM empresas INNER JOIN contactos ON contactos.idempresa=empresas.idempresa INNER JOIN pedidos ON pedidos.idref=contactos.idcontacto LEFT JOIN contactos contactopedido ON contactopedido.IDContacto=pedidos.IDRef LEFT JOIN empresas empresapedido ON empresapedido.IDEmpresa=contactopedido.IDEmpresa LEFT JOIN facturas ON facturas.IDPedido=pedidos.RecID LEFT JOIN requerimientos ON requerimientos.IDPedido=pedidos.RecID LEFT JOIN comercial ON comercial.idref=pedidos.recid LEFT JOIN info ON info.IDRef=pedidos.RecID ";
            //GROUP BY pedidos.ID

    queryprevia.append(group_by);
    queryprevia.append(" GROUP BY pedidos.ID ");
    queryprevia.append(order_by);
    //qDebug() << queryprevia;

    query.prepare(queryprevia);

    query.exec();
    return(query);
}



QSqlQuery Consultador::QueryNormal_items(){

    QSqlQuery query;
    QString queryprevia = "SELECT pedidos.ID, pedidositems.cantidad,pedidositems.codigo,pedidositems.descripcion,COALESCE(a_subquery.total,0) FROM empresas INNER JOIN contactos ON contactos.idempresa=empresas.idempresa INNER JOIN pedidos ON pedidos.idref=contactos.idcontacto LEFT JOIN requerimientos ON requerimientos.IDPedido=pedidos.RecID LEFT JOIN contactos contactopedido ON contactopedido.IDContacto=pedidos.IDRef LEFT JOIN empresas empresapedido ON empresapedido.IDEmpresa=contactopedido.IDEmpresa LEFT JOIN pedidositems ON pedidositems.idpedido = pedidos.RecID LEFT JOIN productos ON pedidositems.IDProducto=productos.RecID LEFT JOIN ( SELECT SUM(CASE TIPO WHEN 0 THEN (cantidad*Equivalencia) WHEN 1 THEN -(cantidad*Equivalencia) ELSE 0 END) AS `Stock`, SUM(CASE TIPO WHEN 0 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 1 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) as TOTAL, SUM(CASE TIPO WHEN 2 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 3 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) as TOTALRESERVADO, (SUM(CASE TIPO WHEN 0 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 1 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) ) - (SUM(CASE TIPO WHEN 2 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 3 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END)) as TOTALDISPONIBLE, `productosstockmovimientos`.`idproducto` FROM `productosstockmovimientos` GROUP BY `productosstockmovimientos`.`idproducto`) `a_subquery` ON (`a_subquery`.`idproducto`=`productos`.`recid`) ";
    queryprevia.append(group_by);


    query.prepare(queryprevia);
   // qDebug() << queryprevia;

    query.exec();
    //query.next();


    return(query);

}

QSqlQuery Consultador::QueryRemitos(){

    QSqlQuery query;
    query.prepare(SQL_REMITOS);
    query.exec();
    return(query);

}

QSqlQuery Consultador::QueryRemitos_items(){

    QSqlQuery query;
    query.prepare(SQL_REMITOS_ITEMS);
    query.exec();
    return(query);



}

void Consultador::Set_GroupBy(int in){

    group_by = "WHERE pedidos.estado=0 AND pedidos.ID>200 ";


    switch (in){

    default:
        break;
    case 1:
        group_by.append("AND requerimientos.estado = 1");
        break;
    case 2:
        group_by.append("AND requerimientos.estado = 0");
        break;
    case 3:
        group_by.append("AND requerimientos.numero IS NULL");

    }


}


QSqlQuery Consultador::QueryRequerimientos(){

    const QString previa = "SELECT requerimientositems.codigo,SUM(requerimientositems.cantidad) FROM empresas INNER JOIN contactos ON (contactos.idempresa=empresas.idempresa) INNER JOIN requerimientos ON (requerimientos.idref=contactos.idcontacto) INNER JOIN requerimientositems ON (requerimientositems.idrequerimiento=requerimientos.recid) LEFT JOIN info on info.IDRef=requerimientos.recid LEFT JOIN requerimientositemsclientes ON requerimientositemsclientes.IDReqProd=requerimientositems.RecID LEFT JOIN pedidositems ON requerimientositemsclientes.IDPedProd=pedidositems.RecID  LEFT JOIN pedidos ON pedidositems.IDPedido=pedidos.RecID LEFT JOIN contactos contactopedido ON contactopedido.IDContacto=pedidos.IDRef LEFT JOIN empresas empresapedido ON empresapedido.IDEmpresa=contactopedido.IDEmpresa WHERE empresas.empresa = \"Trabajos Internos ##\" AND requerimientos.estado = 0 AND contactos.nombre = \"Nestor\" GROUP BY requerimientositems.codigo ORDER BY info.campo4";
    QSqlQuery consulta;
    consulta.exec(previa);
    return(consulta);

}


QSqlQuery Consultador::bring_items(QString num){

    QSqlQuery query;
    QString previa = "SELECT pedidositems.cantidad,pedidositems.codigo,pedidositems.descripcion,COALESCE(a_subquery.total,0) AS stock FROM empresas INNER JOIN contactos ON contactos.idempresa=empresas.idempresa INNER JOIN pedidos ON pedidos.idref=contactos.idcontacto LEFT JOIN contactos contactopedido ON contactopedido.IDContacto=pedidos.IDRef LEFT JOIN empresas empresapedido ON empresapedido.IDEmpresa=contactopedido.IDEmpresa LEFT JOIN pedidositems ON pedidositems.idpedido = pedidos.RecID LEFT JOIN productos ON pedidositems.IDProducto=productos.RecID LEFT JOIN ( SELECT SUM(CASE TIPO WHEN 0 THEN (cantidad*Equivalencia) WHEN 1 THEN -(cantidad*Equivalencia) ELSE 0 END) AS `Stock`, SUM(CASE TIPO WHEN 0 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 1 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) as TOTAL, SUM(CASE TIPO WHEN 2 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 3 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) as TOTALRESERVADO, (SUM(CASE TIPO WHEN 0 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 1 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) ) - (SUM(CASE TIPO WHEN 2 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 3 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END)) as TOTALDISPONIBLE, `productosstockmovimientos`.`idproducto` FROM `productosstockmovimientos` GROUP BY `productosstockmovimientos`.`idproducto`) `a_subquery` ON (`a_subquery`.`idproducto`=`productos`.`recid`) WHERE pedidos.id = ";
    previa.append(num);
    query.exec(previa);
    return(query);
}

bool Consultador::testconnection(){
    QSqlQuery query;
    return(query.exec("SELECT 123"));


}

