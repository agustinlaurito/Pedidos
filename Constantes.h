#include <QString>
#include <QPixmap>


#ifndef CONSTANTES_H
#define CONSTANTES_H


//-------------------------------------------------------- Ajustes de la conexion ODBC -----------------------------------//
const QString ODBC_SERVIDOR = "servidor";
const QString ODBC_USERNAME = "root";
const QString ODBC_CONNECTSTRING = "DRIVER={MYSQL ODBC 3.51 Driver};Server=servidor;database=ACQUATRON";
const QString ODBC_PASSWORD = "";

//-------------------------------------------------------- Consultas -----------------------------------------------------//
const QString SQL_PEDIDOSPENDIENTES = "SELECT pedidos.ID AS Pedido,empresas.empresa AS Cliente,MAX(requerimientos.id) AS Requerimiento,MIN(requerimientos.estado), pedidos.FechaEntrega AS Entrega, comercial.DireccionEntrega, facturas.numero, facturas.estado, info.campo1,info.campo2 FROM empresas INNER JOIN contactos ON contactos.idempresa=empresas.idempresa INNER JOIN pedidos ON pedidos.idref=contactos.idcontacto LEFT JOIN contactos contactopedido ON contactopedido.IDContacto=pedidos.IDRef LEFT JOIN empresas empresapedido ON empresapedido.IDEmpresa=contactopedido.IDEmpresa LEFT JOIN facturas ON facturas.IDPedido=pedidos.RecID LEFT JOIN requerimientos ON requerimientos.IDPedido=pedidos.RecID LEFT JOIN comercial ON comercial.idref=pedidos.recid LEFT JOIN info ON info.IDRef=pedidos.RecID WHERE pedidos.estado=0 AND pedidos.ID>200 GROUP BY pedidos.ID";
const QString SQL_CONSULTA = "SELECT empresas.empresa FROM empresas";
const QString SQL_PEDIDOSITEMS = "SELECT pedidos.ID, pedidositems.cantidad,pedidositems.codigo,pedidositems.descripcion,COALESCE(a_subquery.total,0) FROM empresas INNER JOIN contactos ON contactos.idempresa=empresas.idempresa INNER JOIN pedidos ON pedidos.idref=contactos.idcontacto LEFT JOIN contactos contactopedido ON contactopedido.IDContacto=pedidos.IDRef LEFT JOIN empresas empresapedido ON empresapedido.IDEmpresa=contactopedido.IDEmpresa LEFT JOIN facturas ON facturas.IDPedido=pedidos.RecID LEFT JOIN pedidositems ON pedidositems.idpedido = pedidos.RecID LEFT JOIN productos ON pedidositems.IDProducto=productos.RecID LEFT JOIN ( SELECT SUM(CASE TIPO WHEN 0 THEN (cantidad*Equivalencia) WHEN 1 THEN -(cantidad*Equivalencia) ELSE 0 END) AS `Stock`, SUM(CASE TIPO WHEN 0 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 1 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) as TOTAL, SUM(CASE TIPO WHEN 2 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 3 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) as TOTALRESERVADO, (SUM(CASE TIPO WHEN 0 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 1 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) ) - (SUM(CASE TIPO WHEN 2 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 3 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END)) as TOTALDISPONIBLE, `productosstockmovimientos`.`idproducto` FROM `productosstockmovimientos` GROUP BY `productosstockmovimientos`.`idproducto`) `a_subquery` ON (`a_subquery`.`idproducto`=`productos`.`recid`) WHERE pedidos.estado=0 AND pedidos.ID>200;";


const QString SQL_REQUERIMIENTOS = "SELECT requerimientos.id AS RequerimientoNumero,empresas.empresa AS Encargados,COALESCE(pedidos.id, ''), COALESCE(empresapedido.Empresa, ''),COALESCE(comercial.plazoentrega, ''),COALESCE(info.campo1, ''),COALESCE(info.campo2, 5) FROM empresas INNER JOIN contactos ON (contactos.idempresa=empresas.idempresa)INNER JOIN requerimientos ON (requerimientos.idref=contactos.idcontacto)INNER JOIN requerimientositems ON (requerimientositems.idrequerimiento=requerimientos.recid)LEFT JOIN requerimientositemsclientes ON requerimientositemsclientes.IDReqProd=requerimientositems.RecID LEFT JOIN pedidositems ON requerimientositemsclientes.IDPedProd=pedidositems.RecID LEFT JOIN pedidos ON pedidositems.IDPedido=pedidos.RecID LEFT JOIN contactos contactopedido ON contactopedido.IDContacto=pedidos.IDRef LEFT JOIN empresas empresapedido ON empresapedido.IDEmpresa=contactopedido.IDEmpresa LEFT JOIN comercial ON comercial.idref=requerimientos.recid LEFT JOIN info on info.IDRef=requerimientos.recid WHERE requerimientos.estado = 0 GROUP BY requerimientos.id ORDER BY (CASE info.campo2 WHEN '' THEN 5 ELSE info.campo2 END) ASC, requerimientos.id DESC";
const QString SQL_REQUERIMIENTOSITEMS = "SELECT requerimientos.id,empresas.empresa, requerimientositems.cantidad, requerimientositems.codigo, requerimientositems.descripcion FROM empresas INNER JOIN contactos ON (contactos.idempresa=empresas.idempresa) INNER JOIN requerimientos ON (requerimientos.idref=contactos.idcontacto) INNER JOIN requerimientositems ON (requerimientositems.idrequerimiento=requerimientos.recid) LEFT JOIN info on info.IDRef=requerimientos.recid WHERE requerimientos.estado = 0 ORDER BY (CASE info.campo2 WHEN '' THEN 5 ELSE info.campo2 END) ASC, requerimientos.id DESC";
//
const QString SQL_REMITOS = "SELECT remitos.numero,contactos.nombre,empresas.empresa,COALESCE(comercial.direccionentrega, direcciones.calle),remitos.fechaemision,facturas.numero, facturas.estado, telefonos.numero, (CASE facturas.fechavencimiento WHEN facturas.fechaemision THEN 0 ELSE facturas.fechavencimiento END) FROM remitos LEFT JOIN contactos ON contactos.idcontacto = remitos.idref LEFT JOIN empresas ON empresas.idempresa = contactos.idempresa LEFT JOIN remitositems ON remitositems.idremito = remitos.recid LEFT JOIN pedidos ON pedidos.recID = remitositems.IDPedido LEFT JOIN comercial ON comercial.idref=pedidos.recid LEFT JOIN facturas ON facturas.IDPedido=pedidos.RecID LEFT JOIN fiscal ON fiscal.idref = empresas.idempresa LEFT JOIN direcciones ON direcciones.recid = fiscal.iddireccion LEFT JOIN telefonos ON telefonos.IDDireccion = direcciones.recid WHERE remitos.numero < 15000 AND remitos.numero > 8900 AND remitos.estado = 0 GROUP BY remitos.numero ORDER BY COALESCE(comercial.direccionentrega, direcciones.calle) ASC";

const QString SQL_REMITOS_ITEMS = "SELECT remitos.numero,remitositems.cantidad,productos.codigo,productos.descripcion,pedidos.ID FROM remitositems LEFT JOIN remitos ON remitos.recID = remitositems.IDRemito LEFT JOIN productos on productos.recID = remitositems.IDProducto LEFT JOIN pedidos ON pedidos.recID = remitositems.IDPedido LEFT JOIN comercial ON comercial.idref=pedidos.recid WHERE remitos.numero < 150000 AND remitos.numero > 8900 AND remitos.estado = 0 ORDER BY COALESCE(comercial.direccionentrega, 0) ASC";







#endif // CONSTANTES_H
