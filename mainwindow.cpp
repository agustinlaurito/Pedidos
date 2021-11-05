#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ayuda.h"
#include "QMessageBox"


const unsigned int NUMERO = 0;
const unsigned int EMPRESA = 1;
const unsigned int REQUERIMIENTO = 2;
const unsigned int REQUERIMIENTOESTADO = 3;
const unsigned int FACTURANUMERO = 6;
const unsigned int ESTADOFACTURA = 7;
const unsigned int PEDIDOPRIORIDAD = 8;
const unsigned int PEDIDOADVERTENCIA = 9;
const unsigned int PEDIDOFECHA = 11;


int numero_fila = 0;
QStringList pedido[1000];
QStringList adicional[100];
int rowin = 0;
bool scrollear = true;


void MainWindow::play_cheer(){

    QMediaPlayer *alarma = new QMediaPlayer;
    alarma->setMedia(QUrl("qrc:/Main/Resources/cheerful-527.mp3"));
    alarma->play();

}

void MainWindow::play_alarma(){

    QMediaPlayer *alarma = new QMediaPlayer;
    alarma->setMedia(QUrl("qrc:/Main/Resources/done-for-you-612.mp3"));
    alarma->play();

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    Abrir_ODBC();
    popular_pedidos();
    QMediaPlayer *alarma = new QMediaPlayer;
    alarma->play();

    ui->listWidget->setCurrentRow(0);
    QTimer *cronometro=new QTimer(this);
    connect(cronometro, SIGNAL(timeout()), this, SLOT(funcionActivacionTimer()));
    cronometro->start(240000);

    ui->listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->listWidget->verticalScrollBar()->setStyleSheet("QScrollBar:vertical {border: none;background:white;width:3px;margin: 0px 0px 0px 0px;}QScrollBar::handle:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));min-height: 0px;}QScrollBar::add-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0px;subcontrol-position: bottom;subcontrol-origin: margin;}QScrollBar::sub-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0 px;subcontrol-position: top;subcontrol-origin: margin;}");
    ui->lista_remitos->verticalScrollBar()->setStyleSheet("QScrollBar:vertical {border: none;background:white;width:3px;margin: 0px 0px 0px 0px;}QScrollBar::handle:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));min-height: 3px;}QScrollBar::add-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0px;subcontrol-position: bottom;subcontrol-origin: margin;}QScrollBar::sub-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0 px;subcontrol-position: top;subcontrol-origin: margin;}");
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
    ui->lbl_cantpedidos->setText("Pedidos Pendientes : " + QString::number(ui->listWidget->count()));
    ui->list_desc->verticalScrollBar()->setStyleSheet("width: 0px;");
    ui->list_codigo->verticalScrollBar()->setStyleSheet("width: 0px;");
    ui->list_cant->verticalScrollBar()->setStyleSheet("width: 0px;");
    ui->list_stock->verticalScrollBar()->setStyleSheet("QScrollBar:vertical {border: none;background:white;width:3px;margin: 0px 0px 0px 0px;}QScrollBar::handle:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));min-height: 0px;}QScrollBar::add-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0px;subcontrol-position: bottom;subcontrol-origin: margin;}QScrollBar::sub-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0 px;subcontrol-position: top;subcontrol-origin: margin;}");

// ------------------------------------ Conecto las scrollbars --------------------//

    connect(ui->list_stock->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_desc->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_stock->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_cant->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_stock->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_codigo->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_desc->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_stock->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_desc->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_cant->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_desc->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_codigo->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_cant->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_codigo->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_cant->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_stock->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_cant->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_desc->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_codigo->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_desc->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_codigo->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_cant->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->list_codigo->verticalScrollBar(), &QScrollBar::valueChanged,
    ui->list_stock->verticalScrollBar(), &QScrollBar::setValue);
// -------------------------------------------------------------------------------------//
    // ------- System Notifications Configuration ------- //
        mSystemTrayIcon = new QSystemTrayIcon(this);      //
        mSystemTrayIcon->setIcon(QIcon(":/Main/Resources/advertencia.png"));
        mSystemTrayIcon->setVisible(true);                //
        mSystemTrayIcon->setToolTip("Pedidos");    //
    // -------------------------------------------------- //

    ui->list_stock->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->list_desc->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->list_cant->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->list_codigo->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

    ui->check_scroll->toggle();

}


void MainWindow::Abrir_ODBC(){

    db.setHostName(ODBC_SERVIDOR);
    db.setDatabaseName(ODBC_CONNECTSTRING);
    db.setPassword(ODBC_PASSWORD);
    db.setUserName(ODBC_USERNAME);

   db.open() ? qDebug() << "Enhorabuena" : qDebug() << "Enhoramala";

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::burocratizar(int x){   //Funcion encargada de formatear los items de la lista de pedidos

//------------------------------- Chequeo de si el pedido es nuevo y si fue visto -----------------------------------------//


    QString pedidotexto = pedido[x][PEDIDOFECHA] + " • " + pedido[x][NUMERO] + " • " + pedido[x][EMPRESA];

    QListWidgetItem *item = new QListWidgetItem;


    if(!ini->childGroups().contains(pedido[x][NUMERO])){    //Si no contiene al pedido en la lista, procede a agregarle el nuevo adelante y agregarlo a la lista
            item->setText("[NUEVO] " + pedidotexto);
            item->setTextColor(QColor(255,0,0));
            ini->setValue("/" + pedido[x][NUMERO] + "/check_visto",false);
      }else{ //En caso contrario, chequea si el pedido se vio

        if(!ini->value("/" + pedido[x][NUMERO] + "/check_visto").toBool()){
            item->setText("[NUEVO] " + pedidotexto);
            item->setTextColor(QColor(255,0,0));
        }else{
            item->setText(pedidotexto);
            if(ini->value("/" + pedido[x][NUMERO] + "/check_remitir").toBool()){
                item->setTextColor(QColor("#00BC16"));
                item->setText(item->text() + " [LISTO]");
            }
        }
    }
    if(ui->lista_consultas_agrupar->currentIndex() == 3 and ini->value("/" + pedido[x][NUMERO] + "/check_remitir").toBool())
        return;

    if(ui->lista_consultas_agrupar->currentIndex() == 4 and !ini->value("/" + pedido[x][NUMERO] + "/check_remitir").toBool())
        return;

    item->setToolTip(item->text());

    item->setIcon(QIcon(":/Main/Resources/loading.png"));
    //ui->listWidget->setIconSize(QSize(36,36));


//----------------------------------- Por ultimo, muestro el item y lo seteo como creado ------------------------------------------------------------------------//
    //item->setTextAlignment(Qt::AlignmentFlag::AlignHCenter);
    if(pedido[x][PEDIDOPRIORIDAD].toInt() == 1){
        item->setTextColor(QColor(255,10,10));
    }
    if(pedido[x][PEDIDOPRIORIDAD].toInt() == 2){
        item->setTextColor(QColor(255,195,117));
    }

    if(pedido[x][9].contains("impo",Qt::CaseInsensitive))
        item->setBackgroundColor(QColor(255, 199, 145));

    ui->listWidget->addItem(item);
    ini->beginGroup(pedido[x][NUMERO]);
    ini->setValue("Creado",1);
    if(ini->value("Hora").isNull())
        ini->setValue("Hora", QDate::currentDate().toString());
    ini->setValue("Prioridad",pedido[x][PEDIDOPRIORIDAD]);
    ini->endGroup();
}

void MainWindow::popular_pedidos(){

    ui->listWidget->blockSignals(true);
    ui->listWidget->clear();
    ui->listWidget->blockSignals(false);


    Consultador consultador;
    consultador.Set_GroupBy(ui->lista_consultas_agrupar->currentIndex());

    QSqlQuery consulta = consultador.QueryNormal();



    int iteracion_mayor = 0;
    while(consulta.next()){

        int iteracion_menor = 0;
        while(!consulta.value(iteracion_menor).toString().isNull()){
            if(iteracion_menor < pedido[iteracion_mayor].size()) //Con este IF limpio la proxima posicion del vector
                pedido[iteracion_mayor].removeAt(iteracion_menor);

            pedido[iteracion_mayor].insert(iteracion_menor,consulta.value(iteracion_menor).toString());
            iteracion_menor++;
            QCoreApplication::processEvents();
        }       
        burocratizar(iteracion_mayor);
        iteracion_mayor++;

    }
    formatIcons();
}

void MainWindow::Busca_Escribe(int fila){
//---------------------------- Pedidos --------------------//

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
    ui->lbl_numerofactura->setAlignment(Qt::AlignmentFlag::AlignHCenter);
    ui->lbl_pagoerror->hide();
    ui->lbl_pagorealizado->hide();
    ui->lbl_pagopendiente->hide();
    ui->lbl_reqsin->hide();
    ui->lbl_pagorechazado->hide();
    ui->lbl_constock->hide();
    ui->btn_advertencia->hide();
    ui->list_cant->clear();
    ui->list_desc->clear();
    ui->list_stock->clear();
    ui->list_codigo->clear();
    ui->list_stock->clear();
    ui->check_remitir->setCheckable(false);


    ui->lbl_empresa->setText("Cargando...");
    ui->groupBox->setStyleSheet("background:#A0A0A0;QGroupBox{border-radius: 10px;}");
    QCoreApplication::processEvents();



    bool stock = haystock(pedido[fila][0]);
    int requerimiento = pedido[fila][REQUERIMIENTO].toInt();
    if(requerimiento == 0){
        ui->lbl_requerimiento->setText("Sin requerimiento");
        if(stock){
            ui->lbl_constock->show();
            ui->check_remitir->setCheckable(true);
        }
        else{
            ui->lbl_reqsin->show();
        }
    }else{
        ui->lbl_requerimiento->setText("Requerimiento: " + pedido[fila][REQUERIMIENTO]);
        if(pedido[fila][REQUERIMIENTOESTADO].toInt() == 1 ){
            ui->lbl_completo->show();
            ui->check_remitir->setCheckable(true);
        }else if(pedido[fila][REQUERIMIENTOESTADO].toInt() == 2 ){
            ui->lbl_reqsin->show();
            ui->lbl_requerimiento->setText("Requerimiento Anulado");
        }else{
            ui->lbl_pendiente->show();
        }
    }

    if(pedido[fila][5].indexOf("Berg 3151") > 1){
        ui->label_pic_retira->show();
        ui->lbl_retira->show();
        }else{
        if(pedido[fila][5].isEmpty()){
            ui->label_pic_advertencia->show();
            ui->lbl_entrega->setText("Direccion no cargada");

         }else{
            ui->lbl_entrega->setText(pedido[fila][5]);
            ui->label_pic_entrega->show();
        }
    }

    if(pedido[fila][ESTADOFACTURA].toInt() == 1 or pedido[fila][10].contains("corriente",Qt::CaseInsensitive)){
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

    }

    if(!pedido[fila][10].contains("contado",Qt::CaseInsensitive) and !pedido[fila][10].contains("efectivo",Qt::CaseInsensitive) and !pedido[fila][10].contains("contado",Qt::CaseInsensitive) and !pedido[fila][10].contains("transferencia",Qt::CaseInsensitive) and !pedido[fila][10].isEmpty()){
        ui->lbl_numerofactura->setAlignment(Qt::AlignmentFlag::AlignLeft);
        ui->lbl_numerofactura->setText(pedido[fila][10]);
    }

    ui->lbl_numerofactura->setToolTip(ui->lbl_numerofactura->text());


    if(!pedido[fila][PEDIDOADVERTENCIA].isEmpty()){
        ui->btn_advertencia->show();
        ui->lineEdit->setText(pedido[fila][PEDIDOADVERTENCIA]);
    }
//------------------------ Items ------------------//

    QCoreApplication::processEvents();
    Consultador querying;
    QSqlQuery consulta = querying.bring_items(pedido[fila][NUMERO]);

    while(consulta.next()){
        QString replacement = "";
        for(int saltos_linea = consulta.value(2).toString().count("\n");saltos_linea;saltos_linea--)
            replacement.append("\n");

        QListWidgetItem *itemcant = new QListWidgetItem(consulta.value(0).toString().append(replacement));
        QListWidgetItem *itemcodigo = new QListWidgetItem(consulta.value(1).toString().append(replacement));
        QListWidgetItem *itemdesc = new QListWidgetItem(consulta.value(2).toString());
        QListWidgetItem *itemstock = new QListWidgetItem(consulta.value(3).toString().append(replacement));

        itemcant->setToolTip(itemcant->text());
        itemcodigo->setToolTip(itemcodigo->text());
        itemdesc->setToolTip(itemdesc->text());
        itemstock->setToolTip(itemstock->text());

        if(consulta.value(0).toInt() > consulta.value(3).toInt() or itemcodigo->text().contains("Rep")){
            if(requerimiento){
                itemcant->setBackgroundColor(QColor("#F69962"));
                itemcodigo->setBackgroundColor(QColor("#F69962"));
                itemdesc->setBackgroundColor(QColor("#F69962"));
                itemstock->setBackgroundColor(QColor("#F69962"));
            }else{
                itemcant->setBackgroundColor(QColor("#FFA8B2"));
                itemcodigo->setBackgroundColor(QColor("#FFA8B2"));
                itemdesc->setBackgroundColor(QColor("#FFA8B2"));
                itemstock->setBackgroundColor(QColor("#FFA8B2"));
            }
        }

        ui->list_cant->addItem(itemcant);
        ui->list_codigo->addItem(itemcodigo);
        ui->list_desc->addItem(itemdesc);
        ui->list_stock->addItem(itemstock);
    }
    int prioridad =  pedido[fila][PEDIDOPRIORIDAD].toInt();
     switch (prioridad){
         default:
         case 3: //Prioridad Normal
             ui->groupBox->setStyleSheet("background:#9fdef5;QGroupBox{border-radius: 10px;}");
             break;
         case 1: //Urgente
             ui->groupBox->setStyleSheet("background:#FF8789;QGroupBox{border-radius: 10px;}");
             break;
         case 2: //Prioridad Alta
              ui->groupBox->setStyleSheet("background:#FFC575;QGroupBox{border-radius: 10px;}");
             break;
     }

    ui->lbl_empresa->setText(pedido[fila][EMPRESA]);

}
void MainWindow::on_listWidget_currentItemChanged()
{
    ui->lineEdit->clear();

    QString empresa = ui->listWidget->currentItem()->text();

    Busca_Escribe(ui->listWidget->currentRow());
    ui->check_remitir->setChecked(ini->value("/" + pedido[ui->listWidget->currentRow()][NUMERO] + "/" + "check_remitir", false /* default value */).toBool());
    ui->check_visto->setChecked(ini->value("/" + pedido[ui->listWidget->currentRow()][NUMERO] + "/" + "check_visto", false /* default value */).toBool());

    rowin = ui->listWidget->currentRow();

}

void MainWindow::funcionActivacionTimer(){

    Consultador obj;
    if(!obj.testconnection()){
        db.close();
        db.removeDatabase("ODBC3");
        Abrir_ODBC();
        mSystemTrayIcon->showMessage("Error","Error al conectar con la base de datos",mSystemTrayIcon->Information);
        return;
    }
    int r = ui->listWidget->currentRow();
    ui->listWidget->blockSignals(true);
    ui->listWidget->clear();
    ui->listWidget->blockSignals(false);


    popular_pedidos();

    if(r > ui->listWidget->count())
        ui->listWidget->setCurrentRow(ui->listWidget->count());
    else
        ui->listWidget->setCurrentRow(r);

    ui->lbl_cantpedidos->setText("Pedidos Pendientes: " + QString::number(ui->listWidget->count()));




    if(scrollear){

        int max = ui->listWidget->count();
        ui->listWidget->setCurrentRow(rowin);
        rowin++;
        if(rowin >= max){
            rowin = 0;
            ui->listWidget->setCurrentRow(0);
            }
        }

}

void MainWindow::on_check_remitir_clicked()
{
    ini->beginGroup(pedido[ui->listWidget->currentRow()][NUMERO]);
    ini->setValue("check_remitir",ui->check_remitir->isChecked());
    ini->endGroup();
    ui->check_visto->setChecked(true);

    if(ui->check_remitir->isChecked()){
        play_cheer();
        ui->listWidget->currentItem()->setTextColor(QColor("#00BC16"));
        ui->listWidget->currentItem()->setText(ui->listWidget->currentItem()->text() + " [LISTO]");
    }else{
        ui->listWidget->currentItem()->setTextColor(QColor("#000000"));
        ui->listWidget->currentItem()->setText(ui->listWidget->currentItem()->text().remove(" [LISTO]"));
    }
}

void MainWindow::on_check_visto_clicked()
{
    ini->setValue("/" + pedido[ui->listWidget->currentRow()][NUMERO] + "/check_visto",ui->check_visto->isChecked());

    QString itemactual = ui->listWidget->currentItem()->text();

    if(itemactual.contains("[NUEVO]")){
        ui->listWidget->currentItem()->setText(itemactual.remove("[NUEVO] "));
        if(pedido[ui->listWidget->currentRow()][PEDIDOPRIORIDAD].toInt() != 3)
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

void MainWindow::on_btn_help_clicked()
{
    ayuda Abrir_Ayuda;
    Abrir_Ayuda.setModal(true);
    Abrir_Ayuda.exec();
}

void MainWindow::on_btn_requerimiento_clicked()
{
    Requerimientos window_requerimiento;
    window_requerimiento.setModal(true);
    window_requerimiento.exec();
}

void MainWindow::mostrar_info(QString texto){

    QMessageBox::warning(this,"Advertencia",texto);
}

void MainWindow::on_btn_advertencia_clicked()
{
    mostrar_info("\n" + pedido[ui->listWidget->currentRow()][PEDIDOADVERTENCIA] + "\n" + "\n");
}

void MainWindow::on_lineEdit_editingFinished()
{
    ini->beginGroup(pedido[ui->listWidget->currentRow()][NUMERO]);
    ini->setValue("/linedit",ui->lineEdit->text());
    ini->endGroup();
}

void MainWindow::on_lista_consultas_agrupar_currentIndexChanged(int index)
{

    popular_pedidos();
}

void MainWindow::on_list_cant_currentRowChanged(int currentRow)
{
    ui->list_codigo->setCurrentRow(currentRow);
    ui->list_desc->setCurrentRow(currentRow);
    ui->list_stock->setCurrentRow(currentRow);

}

void MainWindow::on_list_codigo_currentRowChanged(int currentRow)
{
    ui->list_cant->setCurrentRow(currentRow);
    ui->list_desc->setCurrentRow(currentRow);
    ui->list_stock->setCurrentRow(currentRow);

}

void MainWindow::on_list_desc_currentRowChanged(int currentRow)
{
    ui->list_codigo->setCurrentRow(currentRow);
    ui->list_cant->setCurrentRow(currentRow);
    ui->list_stock->setCurrentRow(currentRow);
}

void MainWindow::on_list_stock_currentRowChanged(int currentRow)
{
    ui->list_codigo->setCurrentRow(currentRow);
    ui->list_desc->setCurrentRow(currentRow);
    ui->list_desc->setCurrentRow(currentRow);
}

void MainWindow::on_btn_cambio_clicked()
{

    ui->tabWidget->setCurrentIndex(1);
    query_remitos = remitos.QueryRemitos();
    query_remitos_items = remitos.QueryRemitos_items();

    popular_remitos();
    ui->lista_remitos->setCurrentRow(0);

}

// ----------------------------------- Pestaña Remitos ------------------------------//

void MainWindow::popular_remitos(){

    ui->lista_remitos->blockSignals(true);
    ui->lista_remitos->clear();
    ui->lista_remitos->blockSignals(false);

    ui->lista_remitos->setIconSize(QSize(124,84));
    QSqlQuery consulta = query_remitos;

    while(consulta.next()){

        QListWidgetItem *item_remito = new QListWidgetItem;
        int estadofac = consulta.value(6).toInt();
        int numerofac = consulta.value(5).toInt();


        if(consulta.value(3).toString().contains("Berg 3151")){
            if((estadofac == 0 or estadofac == 3) and numerofac)
                item_remito->setIcon(QIcon(":/Main/Resources/remitos/retira_pagopendiente.png"));
            if(estadofac == 1 and numerofac)
                item_remito->setIcon(QIcon(":/Main/Resources/remitos/retira_pagocheck.png"));
            if(estadofac > 3 and numerofac)
                item_remito->setIcon(QIcon(":/Main/Resources/remitos/retira_pagorechazado.png"));
            if(!numerofac)
                item_remito->setIcon(QIcon(":/Main/Resources/remitos/retira_pagoinexistente.png"));

        }else{
            if((estadofac == 0 or estadofac == 3) and numerofac)
                item_remito->setIcon(QIcon(":/Main/Resources/remitos/envio_pagopendiente.png"));
            if((estadofac == 1 or estadofac == 5) and numerofac)
                item_remito->setIcon(QIcon(":/Main/Resources/remitos/envio_pagocheck.png"));
            if(estadofac > 3 and estadofac != 5 and numerofac)
                item_remito->setIcon(QIcon(":/Main/Resources/remitos/envio_pagorechazado.png"));
            if(!numerofac)
                item_remito->setIcon(QIcon(":/Main/Resources/remitos/envio_pagoinexistente.png"));
        }

        QString str = consulta.value(0).toString() + "  •  " + consulta.value(2).toString();
        item_remito->setText(str);
        ui->lista_remitos->addItem(item_remito);
    }
}


void MainWindow::on_lista_remitos_currentRowChanged(int currentRow)
{
    ui->lbl_remito_telefono->show();
    ui->lbl_remito_factura->show();
    ui->list_remitos_codigo->clear();
    ui->list_remitos_desc->clear();
    ui->list_remitos_stock->clear();

    QSqlQuery consulta = query_remitos;
    QSqlQuery consulta_items = query_remitos_items;

    consulta.next();
    consulta.seek(currentRow);

    QString telefono = consulta.value(7).toString();
    if(telefono.isEmpty())
        ui->lbl_remito_telefono->hide();
    QString nrofac = consulta.value(5).toString();
    if(nrofac.isEmpty() or nrofac == "0")
        ui->lbl_remito_factura->hide();

    QString factura = "Factura: " + nrofac;
    if(consulta.value(8).toBool()){
        QDate facvenc = consulta.value(8).toDate();
        factura.append(" -> Vencimiento: " + QString::number(facvenc.day()) + "/" + QString::number(facvenc.month()));
    }

    ui->lbl_remito_empresa->setText(ui->lista_remitos->currentItem()->text());
    ui->lbl_remito_telefono->setText("Telefono de contacto: " + telefono);
    ui->lbl_remito_factura->setText(factura);

    while(consulta_items.next()){


        if(consulta_items.value(0).toInt() == consulta.value(0)){
            QListWidgetItem *cantidad = new QListWidgetItem;
            cantidad->setTextAlignment(Qt::AlignHCenter);
            QListWidgetItem *descripcion = new QListWidgetItem;
            //descripcion->setTextAlignment(Qt::AlignHCenter);
            QListWidgetItem *codigo = new QListWidgetItem;
            codigo->setTextAlignment(Qt::AlignHCenter);
            int cant_esp = consulta_items.value(3).toString().count("\n");

            cantidad->setText(consulta_items.value(1).toString());
            codigo->setText(consulta_items.value(2).toString());
            descripcion->setText(consulta_items.value(3).toString());
            QDate fecha = consulta.value(4).toDate();
            ui->lbl_talonario->setText("Remitido el: " + QString::number(fecha.day()) + "/" + QString::number(fecha.month()));
            if(consulta_items.value(4).toString() == "0")
                ui->lbl_remitos_pedido->setText("Envio de mercaderia");
            else
                ui->lbl_remitos_pedido->setText("Pedido N°: " + consulta_items.value(4).toString());


            for(;cant_esp > 0;cant_esp--){
                codigo->setText(codigo->text().append("\n"));
                cantidad->setText(cantidad->text().append("\n"));
            }
            ui->list_remitos_codigo->addItem(codigo);
            ui->list_remitos_stock->addItem(cantidad);
            ui->list_remitos_desc->addItem(descripcion);

        }


    }

consulta_items.seek(-1);


}


void MainWindow::on_btn_volver_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

bool MainWindow::haystock(QString pedido){

    QString previa = "SELECT pedidositems.cantidad, a_subquery.total  FROM empresas INNER JOIN contactos ON contactos.idempresa=empresas.idempresa INNER JOIN pedidos ON pedidos.idref=contactos.idcontacto LEFT JOIN contactos contactopedido ON contactopedido.IDContacto=pedidos.IDRef LEFT JOIN empresas empresapedido ON empresapedido.IDEmpresa=contactopedido.IDEmpresa LEFT JOIN pedidositems ON pedidositems.idpedido = pedidos.RecID LEFT JOIN productos ON pedidositems.IDProducto=productos.RecID LEFT JOIN ( SELECT SUM(CASE TIPO WHEN 0 THEN (cantidad*Equivalencia) WHEN 1 THEN -(cantidad*Equivalencia) ELSE 0 END) AS `Stock`, SUM(CASE TIPO WHEN 0 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 1 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) as TOTAL, SUM(CASE TIPO WHEN 2 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 3 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) as TOTALRESERVADO, (SUM(CASE TIPO WHEN 0 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 1 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END) ) - (SUM(CASE TIPO WHEN 2 THEN (productosstockmovimientos.Cantidad*Equivalencia) WHEN 3 THEN -(productosstockmovimientos.Cantidad*Equivalencia) ELSE 0 END)) as TOTALDISPONIBLE, `productosstockmovimientos`.`idproducto` FROM `productosstockmovimientos` GROUP BY `productosstockmovimientos`.`idproducto`) `a_subquery` ON (`a_subquery`.`idproducto`=`productos`.`recid`) WHERE pedidos.id = " + pedido;
    QSqlQuery a;
    a.exec(previa);
    while(a.next()){
        if(a.value(0).toInt() > a.value(1).toInt())
            return false;
    }

    return true;

    }

void MainWindow::formatIcons(){

    for(int i = 0; !pedido[i].isEmpty();i++){
        setIcons(i,haystock(pedido[i][0]));
        QCoreApplication::processEvents();
    }
    ui->listWidget->setIconSize(QSize(100,100));

}

void MainWindow::setIcons(int numeroPedido,bool conStock){

    QString str = QString::number(pedido[numeroPedido][0].toInt());
    QListWidgetItem *item;
    QList<QListWidgetItem*> list = ui->listWidget->findItems(str,Qt::MatchContains);
    if(!list.isEmpty())
        item = ui->listWidget->findItems(str,Qt::MatchContains)[0];

    int x = numeroPedido;
    int requerimiento = pedido[numeroPedido][REQUERIMIENTO].toInt();
    int facturanumero = pedido[numeroPedido][FACTURANUMERO].toInt();
    int requerimientoestado = pedido[numeroPedido][REQUERIMIENTOESTADO].toInt();
    int estadofactura = pedido[numeroPedido][ESTADOFACTURA].toInt();
    int senecesitareq = !conStock;

    if(requerimiento == 0 or requerimientoestado == 2){

            if(!facturanumero and !senecesitareq)
                item->setIcon(QIcon(":/Main/Resources/Icons/stock_PAGOinexistente.png"));
            if(estadofactura > 1 and !senecesitareq)
                item->setIcon(QIcon(":/Main/Resources/Icons/stock_PAGOrechazado.png"));
            if((estadofactura == 1 and !senecesitareq) or (!senecesitareq and !pedido[x][10].contains("contado",Qt::CaseInsensitive) and !pedido[x][10].contains("efectivo",Qt::CaseInsensitive) and !pedido[x][10].contains("contado",Qt::CaseInsensitive) and !pedido[x][10].contains("transferencia",Qt::CaseInsensitive) and !pedido[x][10].isEmpty() and !pedido[x][10].contains("factura en el momento",Qt::CaseInsensitive)))
                item->setIcon(QIcon(":/Main/Resources/Icons/stock_PAGOcheck.png"));
            if(estadofactura == 0 and facturanumero and !senecesitareq)
                item->setIcon(QIcon(":/Main/Resources/Icons/stock_PAGOpendiente.png"));


        if(senecesitareq){
            if(!facturanumero and senecesitareq)
                item->setIcon(QIcon(":/Main/Resources/Icons/REQinexistente_PAGOinexistente.png"));
            if(estadofactura > 1 and senecesitareq)
                item->setIcon(QIcon(":/Main/Resources/Icons/REQinexistente_PAGOrechazado.png"));
            if((estadofactura == 0 and facturanumero and senecesitareq) or pedido[x][10].contains("factura en el momento",Qt::CaseInsensitive))
                item->setIcon(QIcon(":/Main/Resources/Icons/REQinexistente_PAGOpendiente.png"));
            if(estadofactura == 1 or (senecesitareq and !pedido[x][10].contains("contado",Qt::CaseInsensitive) and !pedido[x][10].contains("efectivo",Qt::CaseInsensitive) and !pedido[x][10].contains("contado",Qt::CaseInsensitive) and !pedido[x][10].contains("transferencia",Qt::CaseInsensitive) and !pedido[x][10].isEmpty() and !pedido[x][10].contains("factura en el momento",Qt::CaseInsensitive)))
                item->setIcon(QIcon(":/Main/Resources/Icons/REQinexistente_PAGOcheck.png"));
        }
    }
    if(requerimientoestado == 0 and requerimiento){
        if(!facturanumero)
            item->setIcon(QIcon(":/Main/Resources/Icons/REQpendiente_PAGOinexistente.png"));
        if(estadofactura > 1)
            item->setIcon(QIcon(":/Main/Resources/Icons/REQpendiente_PAGOrechazado.png"));
        if((estadofactura == 0 and facturanumero) or pedido[x][10].contains("factura en el momento",Qt::CaseInsensitive))
            item->setIcon(QIcon(":/Main/Resources/Icons/REQpendiente_PAGOpendiente.png"));
        if(estadofactura == 1 or (!pedido[x][10].contains("contado",Qt::CaseInsensitive) and !pedido[x][10].contains("efectivo",Qt::CaseInsensitive) and !pedido[x][10].contains("contado",Qt::CaseInsensitive) and !pedido[x][10].contains("transferencia",Qt::CaseInsensitive) and !pedido[x][10].isEmpty() and !pedido[x][10].contains("factura en el momento",Qt::CaseInsensitive)))
            item->setIcon(QIcon(":/Main/Resources/Icons/REQpendiente_PAGOcheck.png"));
    }
    if(requerimientoestado == 1){

        //qDebug() << "hola";
        if(!facturanumero)
            item->setIcon(QIcon(":/Main/Resources/Icons/REQcheck_PAGOinexistente.png"));
        if(estadofactura > 1)
            item->setIcon(QIcon(":/Main/Resources/Icons/REQcheck_PAGOrechazado.png"));
        if((estadofactura == 0 and facturanumero) or pedido[x][10].contains("factura en el momento",Qt::CaseInsensitive))
            item->setIcon(QIcon(":/Main/Resources/Icons/REQcheck_PAGOpendiente.png"));
        if(estadofactura == 1 or (!pedido[x][10].contains("contado",Qt::CaseInsensitive) and !pedido[x][10].contains("efectivo",Qt::CaseInsensitive) and !pedido[x][10].contains("contado",Qt::CaseInsensitive) and !pedido[x][10].contains("transferencia",Qt::CaseInsensitive) and !pedido[x][10].isEmpty() and !pedido[x][10].contains("factura en el momento",Qt::CaseInsensitive)))
            item->setIcon(QIcon(":/Main/Resources/Icons/REQcheck_PAGOcheck.png"));

    }
}
