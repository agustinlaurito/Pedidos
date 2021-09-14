#include "requerimientos.h"
#include "ui_requerimientos.h"

const QString separador = " -> ";  // Texto que separa los requerimientos

Requerimientos::Requerimientos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Requerimientos)
{
    ui->setupUi(this);
    this->setWindowTitle("Requerimientos");
    ui->list_requerimientos->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->list_requerimientos->verticalScrollBar()->setStyleSheet("QScrollBar:vertical {border: none;background:white;width:3px;margin: 0px 0px 0px 0px;}QScrollBar::handle:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));min-height: 0px;}QScrollBar::add-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0px;subcontrol-position: bottom;subcontrol-origin: margin;}QScrollBar::sub-line:vertical {background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));height: 0 px;subcontrol-position: top;subcontrol-origin: margin;}");

    llenar_lista();

}

Requerimientos::~Requerimientos()
{
    delete ui;
}

void Requerimientos::llenar_lista(){

    Consultador consultador;
    QSqlQuery consulta = consultador.QueryRequerimientos();

    while(consulta.next()){
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(consulta.value(0).toString() + separador + consulta.value(1).toString());
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
        item->setCheckState(Qt::Unchecked);
        ui->list_requerimientos->insertItem(consulta.at(),item);
    }
}

void Requerimientos::on_list_requerimientos_itemClicked(QListWidgetItem *item)
{
    QString req = item->text().split(separador)[0];

    if(item->checkState()){

        QMessageBox msgBox;
        msgBox.setWindowTitle("Pantalla a Modo Informativo Unicamente");
        msgBox.setInformativeText("Usar para referencia unicamente");
        msgBox.exec();

    }
}
