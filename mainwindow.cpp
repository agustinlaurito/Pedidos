#include "mainwindow.h"
#include "ui_mainwindow.h"


#define NUMERO 0
#define EMPRESA 1
#define REQUERIMIENTO 2
#define ENTREGA 3
#define CANTIDAD 1
#define ITEM_CODIGO 2
#define ITEM_DESCRIPCION 3
#define DIRECCION 4
#define REQUERIMIENTOESTADO 5
#define FACTURANUMERO 6
#define ESTADOFACTURA 7

int numero_fila = 0;
QStringList pedido[100];
QStringList items[100];
QStringList adicional[100];
int cantidaddefilesitems,rowin = 0;
bool scrollear = true;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    popular_pedidos();
    popular_items();
    QTimer *cronometro=new QTimer(this);
    connect(cronometro, SIGNAL(timeout()), this, SLOT(funcionActivacionTimer()));
    cronometro->start(10000);


    //ini->setValue("Test", "data");
//------------------------------------------------------------//

    ui->listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->listdesc->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->listcant->setItemAlignment(Qt::AlignCenter);
    ui->listWidget->verticalScrollBar()->setStyleSheet("QScrollBar:vertical {border: none;background:white;width:3px;margin: 0px 0px 0px 0px;}QScrollBar::handle:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));min-height: 0px;}QScrollBar::add-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0px;subcontrol-position: bottom;subcontrol-origin: margin;}QScrollBar::sub-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0 px;subcontrol-position: top;subcontrol-origin: margin;}");
    ui->listdesc->verticalScrollBar()->setStyleSheet("QScrollBar:vertical {border: none;background:white;width:3px;margin: 0px 0px 0px 0px;}QScrollBar::handle:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));min-height: 0px;}QScrollBar::add-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0px;subcontrol-position: bottom;subcontrol-origin: margin;}QScrollBar::sub-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0 px;subcontrol-position: top;subcontrol-origin: margin;}");
    ui->listdesc->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal {border: none;background:white;height:3px;margin: 0px 0px 0px 0px;}QScrollBar::handle:horizontal {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));min-width: 0px;}QScrollBar::add-line:horizontal {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));width: 0px;subcontrol-position: right;subcontrol-origin: margin;}QScrollBar::sub-line:horizontal {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));width: 0 px;subcontrol-position: left;subcontrol-origin: margin;}");
    ui->label_pic_entrega->hide();
    ui->label_pic_retira->hide();
    ui->label_pic_advertencia->hide();
    ui->lbl_retira->hide();
    ui->listcant->setUniformItemSizes(true);
    ui->lbl_completo->hide();
    ui->lbl_pendiente->hide();
    //ui->flecha->hide();
    ui->lbl_numerofactura->hide();
    ui->lbl_pagoerror->hide();
    ui->lbl_pagorealizado->hide();
    ui->lbl_pagopendiente->hide();
    ui->lbl_reqsin->hide();
    ui->lbl_pagorechazado->hide();
    ui->lbl_cantpedidos->setText("Pedidos Pendientes : " + QString::number(ui->listWidget->count()));


//-------------------------------------------------------------//




}




MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::burocratizar(int x){   //Funcion encargada de formatear los items de la lista de pedidos.

//------------------------------- Chequeo de si el pedido es nuevo y si fue visto -----------------------------------------//

    QListWidgetItem *item = new QListWidgetItem;


    if(!ini->childGroups().contains(pedido[x][NUMERO])){    //Si no contiene al pedido en la lista, procede a agregarle el nuevo adelante y agregarlo a la lista
            item->setText("[NUEVO] " + pedido[x][EMPRESA]);
            item->setTextColor(QColor(255,0,0));
            ini->setValue("/" + pedido[x][NUMERO] + "/check_visto",false);
      }else{ //En caso contrario, chequea si el pedido se vio

        if(!ini->value("/" + pedido[x][NUMERO] + "/check_visto").toBool()){
            item->setText("[NUEVO] " + pedido[x][EMPRESA]);
            item->setTextColor(QColor(255,0,0));
        }else{
            item->setText(pedido[x][EMPRESA]);
        }
    }

//----------------------------------- Habiendo seteado el texto y color, procedo a agregarle el icono de estado del requerimiento y de la factura ---------------//

    int requerimiento = pedido[x][REQUERIMIENTO].toInt();
    int estadofactura = pedido[x][ESTADOFACTURA].toInt();
    int requerimientoestado = pedido[x][REQUERIMIENTOESTADO].toInt();
    int facturanumero = pedido[x][FACTURANUMERO].toInt();

    if(requerimiento == 0){
        if(!facturanumero)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQinexistente_PAGOinexistente.png"));
        if(estadofactura > 1)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQinexistente_PAGOrechazado.png"));
        if(estadofactura == 1)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQinexistente_PAGOcheck.png"));
        if(estadofactura == 0 and facturanumero)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQinexistente_PAGOpendiente.png"));
    }
    if(requerimientoestado == 0 and requerimiento){
        if(!facturanumero)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQpendiente_PAGOinexistente.png"));
        if(estadofactura > 1)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQpendiente_PAGOrechazado.png"));
        if(estadofactura == 1)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQpendiente_PAGOcheck.png"));
        if(estadofactura == 0 and facturanumero)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQpendiente_PAGOpendiente.png"));
    }
    if(requerimientoestado > 0){
       // qDebug() << "hola";
        if(!facturanumero)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQcheck_PAGOinexistente.png"));
        if(estadofactura > 1)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQcheck_PAGOrechazado.png"));
        if(estadofactura == 1)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQcheck_PAGOcheck.png"));
        if(estadofactura == 0 and facturanumero)
            item->setIcon(QIcon("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\Resources\\icons\\REQcheck_PAGOpendiente.png"));
    }



//----------------------------------- Por ultimo, muestro el item y lo seteo como creado ------------------------------------------------------------------------//
    //item->setTextAlignment(Qt::AlignmentFlag::AlignHCenter);
    ui->listWidget->addItem(item);
    ini->beginGroup(pedido[x][NUMERO]);
    ini->setValue("Creado",1);

    ini->endGroup();


}

void MainWindow::popular_pedidos(){


    int fila = 0;
    QFile pedidos_txt("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\pedidos.txt");

    if (pedidos_txt.open(QIODevice::ReadOnly | QIODevice::Text))
    {
       QTextStream in(&pedidos_txt);
       while (!in.atEnd())
       {
          QString line = in.readLine();
          pedido[fila] = line.split("?");
          burocratizar(fila);
          fila++;
       }
       pedidos_txt.close();
    }
}

void MainWindow::popular_items(){
cantidaddefilesitems = 0;
//----------------------------------------------------------------------------------------------------------//
QStringList temporal[100];
QFile pedidos_items_txt("\\\\servidor\\Users\\Public\\Acquatron Compartida\\Andones\\pedidositems.txt");
            if (pedidos_items_txt.open(QIODevice::ReadOnly | QIODevice::Text))
            {
               QTextStream in(&pedidos_items_txt);

               while (!in.atEnd())
               {
                   QString line = in.readLine();
                   items[cantidaddefilesitems] = line.split("?");
                   cantidaddefilesitems++;

               }
               pedidos_items_txt.close();
            }
//----------------------------------------------------------------------------------------------------------//

  //  qDebug() << items->length();
}



void MainWindow::Busca_Escribe(int fila){
//---------------------------- Pedidos --------------//
   // qDebug() << fila;
    ui->lbl_numero->setText(pedido[fila][NUMERO]);
    ui->lbl_entrega->clear();
    ui->label_pic_entrega->hide();
    ui->label_pic_retira->hide();
    ui->label_pic_advertencia->hide();
    ui->lbl_retira->hide();
    ui->lbl_completo->hide();
    ui->lbl_pendiente->hide();
    ui->lbl_numerofactura->hide();
    ui->lbl_pagoerror->hide();
    ui->lbl_pagorealizado->hide();
    ui->lbl_pagopendiente->hide();
    ui->lbl_reqsin->hide();
    ui->lbl_pagorechazado->hide();

    int requerimiento = pedido[fila][REQUERIMIENTO].toInt();
    if(requerimiento == 0){
        ui->lbl_requerimiento->setText("Sin requerimiento") ;
        ui->lbl_reqsin->show();
    }else{

        ui->lbl_requerimiento->setText("Requerimiento: " + pedido[fila][REQUERIMIENTO]);
        if(pedido[fila][REQUERIMIENTOESTADO].toInt() == 1){
            ui->lbl_completo->show();
        }else{
            ui->lbl_pendiente->show();
        }
    }
    if(pedido[fila][4].indexOf("Berg 3151") > 1){
        ui->label_pic_retira->show();
        ui->lbl_retira->show();
        }else{
        if(pedido[fila][4].isEmpty()){
            ui->label_pic_advertencia->show();
            ui->lbl_entrega->setText("Direccion no cargada");
         }else{
            ui->lbl_entrega->setText(pedido[fila][4]);
            ui->label_pic_entrega->show();
        }
    }
    if(pedido[fila][ESTADOFACTURA].toInt() == 1){
        ui->lbl_pagorealizado->show();
        ui->lbl_numerofactura->show();
        ui->lbl_numerofactura->setText("Factura: " + pedido[fila][FACTURANUMERO]);
    }
    if(pedido[fila][ESTADOFACTURA].toInt() == 0 and pedido[fila][FACTURANUMERO].toInt()){
        ui->lbl_pagopendiente->show();
        ui->lbl_numerofactura->show();
        ui->lbl_numerofactura->setText("Factura: " + pedido[fila][FACTURANUMERO]);
    }if(pedido[fila][ESTADOFACTURA].toInt() > 1){
        ui->lbl_pagorechazado->show();
    }
    if(!pedido[fila][FACTURANUMERO].toInt() and pedido[fila][ESTADOFACTURA].toInt() == 0){
        ui->lbl_pagoerror->show();
        ui->lbl_numerofactura->show();
        ui->lbl_numerofactura->setText("Sin Facturar");
        ui->lbl_pagopendiente->hide();
        ui->lbl_pagorechazado->hide();

    }else{
       // ui->lbl_pagoerror->show();
    }
//------------------------ Items ------------------//
    int currentrow = fila;
    QString labelproducto = "";
    QString labelcant = "";
    int a = 0;
    //qDebug << items[currentrow].size();
    foreach(QString v,items[currentrow]){

        //------ 4A Pendiente de la recta. Variando la O.O se obtienen distintos parametros. 0 -> Pedidonro 1 -> Cantidad 2-> Codigo 3-> Descripcion//


        if(((a-1) % 4 == 0 or a == 1) and a){
           // labelcant.append(v + "\n");
            ui->listcant->addItem(v);
        }
        if(((a-2) % 4 == 0 or a == 2) and a){
            labelproducto.append(v);
            //ui->listdesc->addItem(v);
        }
        if(((a-3) % 4 == 0 or a == 3) and a){
            labelproducto.append(v);
            ui->listdesc->addItem(v);
        }



        a++;

    }

}






void MainWindow::on_listWidget_currentItemChanged()
{
    ui->listdesc->clear();
    ui->listcant->clear();
    QString empresa = ui->listWidget->currentItem()->text();
    ui->lbl_empresa->setText(empresa.remove("[NUEVO]"));
    Busca_Escribe(ui->listWidget->currentRow());
    ui->check_remitir->setChecked(ini->value("/" + pedido[ui->listWidget->currentRow()][NUMERO] + "/" + "check_remitir", false /* default value */).toBool());
    ui->check_visto->setChecked(ini->value("/" + pedido[ui->listWidget->currentRow()][NUMERO] + "/" + "check_visto", false /* default value */).toBool());

    rowin = ui->listWidget->currentRow();

}

void MainWindow::on_listdesc_currentRowChanged(int currentRow)
{

    ui->listcant->setCurrentRow(currentRow);
}

void MainWindow::funcionActivacionTimer(){
    ui->listWidget->blockSignals(true);
    ui->listWidget->clear();
    ui->listWidget->blockSignals(false);


    popular_pedidos();
    popular_items();
    ui->lbl_cantpedidos->setText("Pedidos Pendientes: " + QString::number(ui->listWidget->count()));
    int max = ui->listWidget->count();

    rowin++;
    if(rowin >= max)
        rowin = 0;
    if(scrollear)
        ui->listWidget->setCurrentRow(rowin);




}


void MainWindow::on_check_remitir_clicked()
{
    ini->beginGroup(pedido[ui->listWidget->currentRow()][NUMERO]);
    ini->setValue("check_remitir",ui->check_remitir->isChecked());
    ini->endGroup();
    ui->check_visto->setChecked(true);
}

void MainWindow::on_check_visto_clicked()
{
    ini->setValue("/" + pedido[ui->listWidget->currentRow()][NUMERO] + "/check_visto",ui->check_visto->isChecked());

    QString itemactual = ui->listWidget->currentItem()->text();

    if(itemactual.contains("[NUEVO]")){
        ui->listWidget->currentItem()->setText(itemactual.remove("[NUEVO]"));
        ui->listWidget->currentItem()->setTextColor(QColor(0,0,0));
    }
}

void MainWindow::on_check_scroll_toggled(bool checked)
{
    scrollear = checked;
}


void MainWindow::on_btn_cambiotab_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}
