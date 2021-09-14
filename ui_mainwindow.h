/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Pedidos;
    QLabel *lbl_cantpedidos_2;
    QLabel *Acqualogo;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QGroupBox *A_Grupo2;
    QLabel *lbl_numero;
    QLabel *lbl_empresa;
    QCheckBox *check_visto;
    QLabel *lbl_visto;
    QGroupBox *A_Grupo1;
    QLabel *lbl_requerimiento;
    QLabel *descripcion;
    QLabel *lbl_entrega;
    QLabel *label_pic_retira;
    QLabel *label_pic_entrega;
    QLabel *label_pic_advertencia;
    QLabel *lbl_retira;
    QLabel *lbl_pendiente;
    QLabel *lbl_completo;
    QLabel *lbl_pagopendiente;
    QLabel *lbl_pagorealizado;
    QLabel *lbl_pagoerror;
    QLabel *lbl_numerofactura;
    QLabel *lbl_pagorechazado;
    QLabel *lbl_reqsin;
    QLabel *lbl_vistoaremitir;
    QCheckBox *check_remitir;
    QLabel *lbl_constock;
    QPushButton *btn_advertencia;
    QLabel *cantidad_3;
    QListWidget *list_cant;
    QListWidget *list_desc;
    QListWidget *list_stock;
    QListWidget *list_codigo;
    QLabel *descripcion_2;
    QLabel *descripcion_3;
    QLabel *descripcion_4;
    QLineEdit *lineEdit;
    QCheckBox *check_scroll;
    QPushButton *btn_help;
    QGroupBox *groupBox_2;
    QComboBox *lista_consultas;
    QComboBox *lista_consultas_agrupar;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_cambio;
    QLabel *descripcion_8;
    QLabel *lbl_cantpedidos;
    QLabel *descripcion_9;
    QPushButton *btn_requerimiento;
    QWidget *General;
    QListWidget *lista_remitos;
    QGroupBox *group_remito;
    QListWidget *list_remitos_desc;
    QListWidget *list_remitos_stock;
    QListWidget *list_remitos_codigo;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_remito_numero;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbl_remito_empresa;
    QSpacerItem *horizontalSpacer;
    QLabel *lbl_remito_pedido;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_talonario;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbl_remitos_pedido;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_remito_factura;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lbl_remito_telefono;
    QLabel *descripcion_5;
    QLabel *descripcion_6;
    QLabel *descripcion_7;
    QLabel *Acqualogo_2;
    QPushButton *btn_volver;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1921, 1009);
        QIcon icon;
        icon.addFile(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-30, -60, 2121, 1171));
        QFont font;
        font.setFamily(QString::fromUtf8("Quicksand"));
        font.setPointSize(8);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        Pedidos = new QWidget();
        Pedidos->setObjectName(QString::fromUtf8("Pedidos"));
        Pedidos->setEnabled(true);
        Pedidos->setStyleSheet(QString::fromUtf8(""));
        lbl_cantpedidos_2 = new QLabel(Pedidos);
        lbl_cantpedidos_2->setObjectName(QString::fromUtf8("lbl_cantpedidos_2"));
        lbl_cantpedidos_2->setGeometry(QRect(1480, 990, 61, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Quicksand"));
        font1.setPointSize(16);
        lbl_cantpedidos_2->setFont(font1);
        Acqualogo = new QLabel(Pedidos);
        Acqualogo->setObjectName(QString::fromUtf8("Acqualogo"));
        Acqualogo->setGeometry(QRect(1680, 980, 251, 51));
        Acqualogo->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/acqualogo.png")));
        Acqualogo->setScaledContents(true);
        listWidget = new QListWidget(Pedidos);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 40, 771, 931));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Quicksand"));
        font2.setPointSize(22);
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget { outline: none; border:0px solid gray; color: black;background: #F2F2F2;;border-radius: 10px;padding:10px;}\n"
"QListWidget::Item { width: 50px; height: 50px; }\n"
"QListWidget::Item:hover { background: #2FA9E0; color: white;border-radius:0px; }\n"
"QListWidget::item:selected { background: #e7e7e7;color: #30A2FF; }\n"
"QListWidget::QScrollBar:vertical {              \n"
"            border: none;\n"
"            background:white;\n"
"            width:3px;\n"
"            margin: 0px 0px 0px 0px;\n"
"        }\n"
""));
        listWidget->setIconSize(QSize(100, 100));
        listWidget->setTextElideMode(Qt::ElideMiddle);
        groupBox = new QGroupBox(Pedidos);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(820, 40, 1121, 931));
        groupBox->setStyleSheet(QString::fromUtf8("border: 0px;"));
        A_Grupo2 = new QGroupBox(groupBox);
        A_Grupo2->setObjectName(QString::fromUtf8("A_Grupo2"));
        A_Grupo2->setGeometry(QRect(10, 20, 1211, 101));
        A_Grupo2->setStyleSheet(QString::fromUtf8("border:0;"));
        A_Grupo2->setFlat(false);
        lbl_numero = new QLabel(A_Grupo2);
        lbl_numero->setObjectName(QString::fromUtf8("lbl_numero"));
        lbl_numero->setGeometry(QRect(10, 0, 161, 81));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Quicksand"));
        font3.setPointSize(36);
        font3.setBold(false);
        font3.setWeight(50);
        lbl_numero->setFont(font3);
        lbl_numero->setStyleSheet(QString::fromUtf8("background:#F2F2F2;\n"
"border-radius: 10px;"));
        lbl_numero->setFrameShape(QFrame::NoFrame);
        lbl_numero->setAlignment(Qt::AlignCenter);
        lbl_empresa = new QLabel(A_Grupo2);
        lbl_empresa->setObjectName(QString::fromUtf8("lbl_empresa"));
        lbl_empresa->setGeometry(QRect(190, 0, 831, 81));
        lbl_empresa->setFont(font3);
        lbl_empresa->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;"));
        lbl_empresa->setFrameShape(QFrame::NoFrame);
        lbl_empresa->setAlignment(Qt::AlignCenter);
        check_visto = new QCheckBox(A_Grupo2);
        check_visto->setObjectName(QString::fromUtf8("check_visto"));
        check_visto->setGeometry(QRect(1060, 30, 41, 51));
        check_visto->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width:41px;height: 31px;}\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image: url(:/Main/Resources/checkboxcheck.png);\n"
"}\n"
"QCheckBox::indicator:unchecked\n"
"{\n"
"    image: url(:/Main/Resources/checkboxempty.png);\n"
"}"));
        lbl_visto = new QLabel(A_Grupo2);
        lbl_visto->setObjectName(QString::fromUtf8("lbl_visto"));
        lbl_visto->setGeometry(QRect(1040, 0, 71, 31));
        lbl_visto->setFont(font1);
        lbl_visto->setAlignment(Qt::AlignCenter);
        A_Grupo1 = new QGroupBox(groupBox);
        A_Grupo1->setObjectName(QString::fromUtf8("A_Grupo1"));
        A_Grupo1->setGeometry(QRect(70, 140, 311, 51));
        A_Grupo1->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background: #F2F2F2;"));
        lbl_requerimiento = new QLabel(A_Grupo1);
        lbl_requerimiento->setObjectName(QString::fromUtf8("lbl_requerimiento"));
        lbl_requerimiento->setGeometry(QRect(30, 10, 311, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Quicksand"));
        font4.setPointSize(22);
        font4.setBold(false);
        font4.setWeight(50);
        lbl_requerimiento->setFont(font4);
        lbl_requerimiento->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion = new QLabel(groupBox);
        descripcion->setObjectName(QString::fromUtf8("descripcion"));
        descripcion->setGeometry(QRect(230, 370, 801, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Quicksand"));
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setWeight(50);
        descripcion->setFont(font5);
        descripcion->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion->setFrameShape(QFrame::Box);
        descripcion->setAlignment(Qt::AlignCenter);
        lbl_entrega = new QLabel(groupBox);
        lbl_entrega->setObjectName(QString::fromUtf8("lbl_entrega"));
        lbl_entrega->setGeometry(QRect(230, 240, 881, 81));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_entrega->sizePolicy().hasHeightForWidth());
        lbl_entrega->setSizePolicy(sizePolicy);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Chivo"));
        font6.setPointSize(14);
        lbl_entrega->setFont(font6);
        lbl_entrega->setStyleSheet(QString::fromUtf8(""));
        lbl_entrega->setScaledContents(true);
        lbl_entrega->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_pic_retira = new QLabel(groupBox);
        label_pic_retira->setObjectName(QString::fromUtf8("label_pic_retira"));
        label_pic_retira->setGeometry(QRect(100, 200, 101, 91));
        label_pic_retira->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/delivery-box.png")));
        label_pic_retira->setScaledContents(true);
        label_pic_entrega = new QLabel(groupBox);
        label_pic_entrega->setObjectName(QString::fromUtf8("label_pic_entrega"));
        label_pic_entrega->setGeometry(QRect(100, 210, 101, 91));
        label_pic_entrega->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/truck.png")));
        label_pic_entrega->setScaledContents(true);
        label_pic_advertencia = new QLabel(groupBox);
        label_pic_advertencia->setObjectName(QString::fromUtf8("label_pic_advertencia"));
        label_pic_advertencia->setGeometry(QRect(100, 200, 101, 91));
        label_pic_advertencia->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/advertencia.png")));
        label_pic_advertencia->setScaledContents(true);
        lbl_retira = new QLabel(groupBox);
        lbl_retira->setObjectName(QString::fromUtf8("lbl_retira"));
        lbl_retira->setGeometry(QRect(110, 290, 91, 21));
        sizePolicy.setHeightForWidth(lbl_retira->sizePolicy().hasHeightForWidth());
        lbl_retira->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Chivo"));
        font7.setPointSize(16);
        lbl_retira->setFont(font7);
        lbl_retira->setStyleSheet(QString::fromUtf8(""));
        lbl_retira->setScaledContents(true);
        lbl_retira->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        lbl_pendiente = new QLabel(groupBox);
        lbl_pendiente->setObjectName(QString::fromUtf8("lbl_pendiente"));
        lbl_pendiente->setGeometry(QRect(420, 140, 61, 61));
        lbl_pendiente->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/pendiente.png")));
        lbl_pendiente->setScaledContents(true);
        lbl_completo = new QLabel(groupBox);
        lbl_completo->setObjectName(QString::fromUtf8("lbl_completo"));
        lbl_completo->setGeometry(QRect(420, 140, 61, 61));
        lbl_completo->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/verificado.png")));
        lbl_completo->setScaledContents(true);
        lbl_pagopendiente = new QLabel(groupBox);
        lbl_pagopendiente->setObjectName(QString::fromUtf8("lbl_pagopendiente"));
        lbl_pagopendiente->setGeometry(QRect(510, 140, 71, 61));
        lbl_pagopendiente->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/pago_pendien.png")));
        lbl_pagopendiente->setScaledContents(true);
        lbl_pagorealizado = new QLabel(groupBox);
        lbl_pagorealizado->setObjectName(QString::fromUtf8("lbl_pagorealizado"));
        lbl_pagorealizado->setGeometry(QRect(510, 140, 71, 61));
        lbl_pagorealizado->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/pago_check.png")));
        lbl_pagorealizado->setScaledContents(true);
        lbl_pagoerror = new QLabel(groupBox);
        lbl_pagoerror->setObjectName(QString::fromUtf8("lbl_pagoerror"));
        lbl_pagoerror->setGeometry(QRect(510, 140, 71, 61));
        lbl_pagoerror->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/pago_no_existente.png")));
        lbl_pagoerror->setScaledContents(true);
        lbl_numerofactura = new QLabel(groupBox);
        lbl_numerofactura->setObjectName(QString::fromUtf8("lbl_numerofactura"));
        lbl_numerofactura->setGeometry(QRect(710, 150, 321, 51));
        lbl_numerofactura->setFont(font2);
        lbl_numerofactura->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background: #F2F2F2;\n"
"padding: 8px;"));
        lbl_numerofactura->setAlignment(Qt::AlignCenter);
        lbl_pagorechazado = new QLabel(groupBox);
        lbl_pagorechazado->setObjectName(QString::fromUtf8("lbl_pagorechazado"));
        lbl_pagorechazado->setGeometry(QRect(510, 140, 71, 61));
        lbl_pagorechazado->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/pago_rechazdo.png")));
        lbl_pagorechazado->setScaledContents(true);
        lbl_reqsin = new QLabel(groupBox);
        lbl_reqsin->setObjectName(QString::fromUtf8("lbl_reqsin"));
        lbl_reqsin->setGeometry(QRect(420, 140, 61, 61));
        lbl_reqsin->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/sinrequerimiento.png")));
        lbl_reqsin->setScaledContents(true);
        lbl_vistoaremitir = new QLabel(groupBox);
        lbl_vistoaremitir->setObjectName(QString::fromUtf8("lbl_vistoaremitir"));
        lbl_vistoaremitir->setGeometry(QRect(1050, 130, 81, 21));
        lbl_vistoaremitir->setFont(font1);
        lbl_vistoaremitir->setAlignment(Qt::AlignCenter);
        check_remitir = new QCheckBox(groupBox);
        check_remitir->setObjectName(QString::fromUtf8("check_remitir"));
        check_remitir->setGeometry(QRect(1070, 150, 41, 51));
        check_remitir->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width:41px;height: 31px;}\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image: url(:/Main/Resources/checkboxcheck.png);\n"
"}\n"
"QCheckBox::indicator:unchecked\n"
"{\n"
"    image: url(:/Main/Resources/checkboxempty.png);\n"
"}"));
        lbl_constock = new QLabel(groupBox);
        lbl_constock->setObjectName(QString::fromUtf8("lbl_constock"));
        lbl_constock->setGeometry(QRect(420, 140, 51, 51));
        lbl_constock->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/crosscheck.png")));
        lbl_constock->setScaledContents(true);
        btn_advertencia = new QPushButton(groupBox);
        btn_advertencia->setObjectName(QString::fromUtf8("btn_advertencia"));
        btn_advertencia->setGeometry(QRect(620, 140, 71, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Main/Resources/warning.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_advertencia->setIcon(icon1);
        btn_advertencia->setIconSize(QSize(500, 70));
        btn_advertencia->setFlat(true);
        cantidad_3 = new QLabel(groupBox);
        cantidad_3->setObjectName(QString::fromUtf8("cantidad_3"));
        cantidad_3->setGeometry(QRect(10, 330, 71, 41));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Quicksand"));
        font8.setPointSize(16);
        font8.setBold(true);
        font8.setWeight(75);
        cantidad_3->setFont(font8);
        cantidad_3->setStyleSheet(QString::fromUtf8("border:0;"));
        list_cant = new QListWidget(groupBox);
        list_cant->setObjectName(QString::fromUtf8("list_cant"));
        list_cant->setGeometry(QRect(10, 420, 61, 501));
        list_cant->setFont(font8);
        list_cant->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
"\n"
""));
        list_cant->setFrameShape(QFrame::NoFrame);
        list_desc = new QListWidget(groupBox);
        list_desc->setObjectName(QString::fromUtf8("list_desc"));
        list_desc->setGeometry(QRect(240, 420, 781, 501));
        list_desc->setFont(font8);
        list_desc->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
""));
        list_desc->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        list_stock = new QListWidget(groupBox);
        list_stock->setObjectName(QString::fromUtf8("list_stock"));
        list_stock->setGeometry(QRect(1040, 420, 71, 501));
        list_stock->setFont(font8);
        list_stock->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
"border:0px;\n"
""));
        list_stock->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        list_codigo = new QListWidget(groupBox);
        list_codigo->setObjectName(QString::fromUtf8("list_codigo"));
        list_codigo->setGeometry(QRect(90, 420, 131, 501));
        list_codigo->setFont(font8);
        list_codigo->setStyleSheet(QString::fromUtf8("background-color: #F2F2F2;\n"
"\n"
"border-radius: 10px;\n"
""));
        descripcion_2 = new QLabel(groupBox);
        descripcion_2->setObjectName(QString::fromUtf8("descripcion_2"));
        descripcion_2->setGeometry(QRect(80, 370, 151, 41));
        descripcion_2->setFont(font5);
        descripcion_2->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion_2->setFrameShape(QFrame::Box);
        descripcion_2->setAlignment(Qt::AlignCenter);
        descripcion_3 = new QLabel(groupBox);
        descripcion_3->setObjectName(QString::fromUtf8("descripcion_3"));
        descripcion_3->setGeometry(QRect(0, 370, 81, 41));
        descripcion_3->setFont(font5);
        descripcion_3->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion_3->setFrameShape(QFrame::Box);
        descripcion_3->setAlignment(Qt::AlignCenter);
        descripcion_4 = new QLabel(groupBox);
        descripcion_4->setObjectName(QString::fromUtf8("descripcion_4"));
        descripcion_4->setGeometry(QRect(1040, 370, 71, 41));
        descripcion_4->setFont(font5);
        descripcion_4->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion_4->setFrameShape(QFrame::Box);
        descripcion_4->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 330, 1031, 41));
        lineEdit->setFont(font8);
        lineEdit->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"font-weight: bold;\n"
""));
        check_scroll = new QCheckBox(Pedidos);
        check_scroll->setObjectName(QString::fromUtf8("check_scroll"));
        check_scroll->setGeometry(QRect(1550, 990, 41, 31));
        check_scroll->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width:37px;height: 27px;}\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image: url(:/Main/Resources/checkboxcheck.png);\n"
"}\n"
"QCheckBox::indicator:unchecked\n"
"{\n"
"    image: url(:/Main/Resources/checkboxempty.png);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Main/Resources/checkboxempty.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/Main/Resources/checkboxcheck.png"), QSize(), QIcon::Normal, QIcon::On);
        check_scroll->setIcon(icon2);
        check_scroll->setChecked(true);
        btn_help = new QPushButton(Pedidos);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(1610, 980, 51, 51));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Main/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_help->setIcon(icon3);
        btn_help->setIconSize(QSize(500, 36));
        btn_help->setFlat(true);
        groupBox_2 = new QGroupBox(Pedidos);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 980, 771, 41));
        groupBox_2->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
""));
        lista_consultas = new QComboBox(groupBox_2);
        lista_consultas->addItem(QString());
        lista_consultas->addItem(QString());
        lista_consultas->addItem(QString());
        lista_consultas->setObjectName(QString::fromUtf8("lista_consultas"));
        lista_consultas->setGeometry(QRect(140, 10, 231, 22));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Quicksand"));
        font9.setPointSize(12);
        font9.setBold(false);
        font9.setWeight(50);
        lista_consultas->setFont(font9);
        lista_consultas->setStyleSheet(QString::fromUtf8(""));
        lista_consultas->setFrame(true);
        lista_consultas_agrupar = new QComboBox(groupBox_2);
        lista_consultas_agrupar->addItem(QString());
        lista_consultas_agrupar->addItem(QString());
        lista_consultas_agrupar->addItem(QString());
        lista_consultas_agrupar->addItem(QString());
        lista_consultas_agrupar->setObjectName(QString::fromUtf8("lista_consultas_agrupar"));
        lista_consultas_agrupar->setGeometry(QRect(520, 10, 241, 22));
        lista_consultas_agrupar->setFont(font9);
        lista_consultas_agrupar->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 111, 21));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Quicksand"));
        font10.setPointSize(12);
        font10.setBold(true);
        font10.setWeight(75);
        label->setFont(font10);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 10, 91, 21));
        label_2->setFont(font10);
        btn_cambio = new QPushButton(Pedidos);
        btn_cambio->setObjectName(QString::fromUtf8("btn_cambio"));
        btn_cambio->setGeometry(QRect(1420, 980, 51, 41));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Main/Resources/warehouse.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cambio->setIcon(icon4);
        btn_cambio->setIconSize(QSize(500, 36));
        btn_cambio->setFlat(true);
        descripcion_8 = new QLabel(Pedidos);
        descripcion_8->setObjectName(QString::fromUtf8("descripcion_8"));
        descripcion_8->setGeometry(QRect(1330, 980, 91, 51));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Quicksand"));
        font11.setPointSize(16);
        font11.setBold(false);
        font11.setWeight(50);
        descripcion_8->setFont(font11);
        descripcion_8->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion_8->setFrameShape(QFrame::Box);
        descripcion_8->setAlignment(Qt::AlignCenter);
        lbl_cantpedidos = new QLabel(Pedidos);
        lbl_cantpedidos->setObjectName(QString::fromUtf8("lbl_cantpedidos"));
        lbl_cantpedidos->setGeometry(QRect(830, 990, 251, 31));
        lbl_cantpedidos->setFont(font1);
        descripcion_9 = new QLabel(Pedidos);
        descripcion_9->setObjectName(QString::fromUtf8("descripcion_9"));
        descripcion_9->setGeometry(QRect(1110, 980, 161, 51));
        descripcion_9->setFont(font11);
        descripcion_9->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion_9->setFrameShape(QFrame::Box);
        descripcion_9->setAlignment(Qt::AlignCenter);
        btn_requerimiento = new QPushButton(Pedidos);
        btn_requerimiento->setObjectName(QString::fromUtf8("btn_requerimiento"));
        btn_requerimiento->setGeometry(QRect(1270, 980, 51, 41));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Main/Resources/product.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_requerimiento->setIcon(icon5);
        btn_requerimiento->setIconSize(QSize(500, 36));
        btn_requerimiento->setFlat(true);
        tabWidget->addTab(Pedidos, QString());
        General = new QWidget();
        General->setObjectName(QString::fromUtf8("General"));
        lista_remitos = new QListWidget(General);
        lista_remitos->setObjectName(QString::fromUtf8("lista_remitos"));
        lista_remitos->setGeometry(QRect(50, 50, 741, 911));
        lista_remitos->setStyleSheet(QString::fromUtf8("QListWidget {\n"
" outline: none; \n"
"border:0px solid gray; \n"
"color: black;\n"
"background: #F2F2F2;\n"
"border-radius: 10px;\n"
"padding:10px;\n"
"font-family: Quicksand;\n"
"font-size: 20pt;\n"
"}\n"
"QListWidget::Item { width: 50px; height: 50px; }\n"
"QListWidget::Item:hover { background: #2FA9E0; color: white;border-radius:0px; }\n"
"QListWidget::item:selected { background: #e7e7e7;color: #30A2FF; }\n"
"QListWidget::QScrollBar:vertical {              \n"
"            border: none;\n"
"            background:white;\n"
"            width:3px;\n"
"            margin: 0px 0px 0px 0px;\n"
"        }\n"
""));
        group_remito = new QGroupBox(General);
        group_remito->setObjectName(QString::fromUtf8("group_remito"));
        group_remito->setGeometry(QRect(810, 50, 1121, 911));
        group_remito->setStyleSheet(QString::fromUtf8("\n"
"background: #9fdef5;"));
        list_remitos_desc = new QListWidget(group_remito);
        list_remitos_desc->setObjectName(QString::fromUtf8("list_remitos_desc"));
        list_remitos_desc->setGeometry(QRect(320, 420, 771, 481));
        list_remitos_desc->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"font-family: Quicksand;\n"
"font-size: 22px;\n"
"font-weight: bold;\n"
"padding: 10px;\n"
"border-radius: 10px;"));
        list_remitos_stock = new QListWidget(group_remito);
        list_remitos_stock->setObjectName(QString::fromUtf8("list_remitos_stock"));
        list_remitos_stock->setGeometry(QRect(20, 420, 71, 481));
        list_remitos_stock->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"font-family: Quicksand;\n"
"font-size: 22px;\n"
"font-weight: bold;\n"
"padding: 10px;\n"
"border-radius: 10px;"));
        list_remitos_codigo = new QListWidget(group_remito);
        list_remitos_codigo->setObjectName(QString::fromUtf8("list_remitos_codigo"));
        list_remitos_codigo->setGeometry(QRect(110, 420, 191, 481));
        list_remitos_codigo->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"font-family: Quicksand;\n"
"font-size: 22px;\n"
"font-weight: bold;\n"
"padding: 10px;\n"
"border-radius: 10px;"));
        horizontalLayoutWidget = new QWidget(group_remito);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(19, 19, 1071, 131));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_remito_numero = new QLabel(horizontalLayoutWidget);
        lbl_remito_numero->setObjectName(QString::fromUtf8("lbl_remito_numero"));
        lbl_remito_numero->setStyleSheet(QString::fromUtf8("font-family: Quicksand;\n"
"font-size: 28pt;\n"
"font-weight: bold;\n"
""));

        horizontalLayout->addWidget(lbl_remito_numero);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lbl_remito_empresa = new QLabel(horizontalLayoutWidget);
        lbl_remito_empresa->setObjectName(QString::fromUtf8("lbl_remito_empresa"));
        lbl_remito_empresa->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"font-family: Quicksand;\n"
"font-size: 36pt;\n"
"font-weight: bold;\n"
"background: #F2F2F2;\n"
"\n"
"padding: 10px;\n"
""));

        horizontalLayout->addWidget(lbl_remito_empresa);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lbl_remito_pedido = new QLabel(horizontalLayoutWidget);
        lbl_remito_pedido->setObjectName(QString::fromUtf8("lbl_remito_pedido"));
        lbl_remito_pedido->setStyleSheet(QString::fromUtf8("font-family: Quicksand;\n"
"font-size: 28pt;\n"
"font-weight: bold;\n"
""));

        horizontalLayout->addWidget(lbl_remito_pedido);

        horizontalLayoutWidget_2 = new QWidget(group_remito);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 170, 1071, 81));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_talonario = new QLabel(horizontalLayoutWidget_2);
        lbl_talonario->setObjectName(QString::fromUtf8("lbl_talonario"));
        lbl_talonario->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
"font-family: Quicksand;\n"
"font-size: 28px;\n"
"padding: 10px;"));

        horizontalLayout_2->addWidget(lbl_talonario);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lbl_remitos_pedido = new QLabel(horizontalLayoutWidget_2);
        lbl_remitos_pedido->setObjectName(QString::fromUtf8("lbl_remitos_pedido"));
        lbl_remitos_pedido->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
"font-family: Quicksand;\n"
"font-size: 28px;\n"
"padding: 10px;"));

        horizontalLayout_2->addWidget(lbl_remitos_pedido);

        horizontalLayoutWidget_3 = new QWidget(group_remito);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 260, 1071, 81));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lbl_remito_factura = new QLabel(horizontalLayoutWidget_3);
        lbl_remito_factura->setObjectName(QString::fromUtf8("lbl_remito_factura"));
        lbl_remito_factura->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
"font-family: Quicksand;\n"
"font-size: 28px;\n"
"padding: 10px;"));

        horizontalLayout_3->addWidget(lbl_remito_factura);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lbl_remito_telefono = new QLabel(horizontalLayoutWidget_3);
        lbl_remito_telefono->setObjectName(QString::fromUtf8("lbl_remito_telefono"));
        lbl_remito_telefono->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
"font-family: Quicksand;\n"
"font-size: 28px;\n"
"padding: 10px;"));

        horizontalLayout_3->addWidget(lbl_remito_telefono);

        descripcion_5 = new QLabel(group_remito);
        descripcion_5->setObjectName(QString::fromUtf8("descripcion_5"));
        descripcion_5->setGeometry(QRect(320, 360, 771, 51));
        descripcion_5->setFont(font5);
        descripcion_5->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        descripcion_5->setFrameShape(QFrame::Box);
        descripcion_5->setAlignment(Qt::AlignCenter);
        descripcion_6 = new QLabel(group_remito);
        descripcion_6->setObjectName(QString::fromUtf8("descripcion_6"));
        descripcion_6->setGeometry(QRect(10, 360, 91, 51));
        descripcion_6->setFont(font5);
        descripcion_6->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion_6->setFrameShape(QFrame::Box);
        descripcion_6->setAlignment(Qt::AlignCenter);
        descripcion_7 = new QLabel(group_remito);
        descripcion_7->setObjectName(QString::fromUtf8("descripcion_7"));
        descripcion_7->setGeometry(QRect(110, 360, 191, 51));
        descripcion_7->setFont(font5);
        descripcion_7->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion_7->setFrameShape(QFrame::Box);
        descripcion_7->setAlignment(Qt::AlignCenter);
        Acqualogo_2 = new QLabel(General);
        Acqualogo_2->setObjectName(QString::fromUtf8("Acqualogo_2"));
        Acqualogo_2->setGeometry(QRect(1680, 980, 251, 51));
        Acqualogo_2->setPixmap(QPixmap(QString::fromUtf8(":/Main/Resources/acqualogo.png")));
        Acqualogo_2->setScaledContents(true);
        btn_volver = new QPushButton(General);
        btn_volver->setObjectName(QString::fromUtf8("btn_volver"));
        btn_volver->setGeometry(QRect(1514, 980, 121, 41));
        tabWidget->addTab(General, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        lista_consultas->setCurrentIndex(1);
        lista_consultas_agrupar->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Acquatron Pedidos", nullptr));
        lbl_cantpedidos_2->setText(QApplication::translate("MainWindow", "Scroll", nullptr));
        Acqualogo->setText(QString());
        groupBox->setTitle(QString());
        A_Grupo2->setTitle(QString());
        lbl_numero->setText(QString());
        lbl_empresa->setText(QString());
        check_visto->setText(QString());
        lbl_visto->setText(QApplication::translate("MainWindow", "Visto", nullptr));
        A_Grupo1->setTitle(QString());
        lbl_requerimiento->setText(QApplication::translate("MainWindow", "Requerimiento:", nullptr));
        descripcion->setText(QApplication::translate("MainWindow", "Descripcion", nullptr));
        lbl_entrega->setText(QString());
        label_pic_retira->setText(QString());
        label_pic_entrega->setText(QString());
        label_pic_advertencia->setText(QString());
        lbl_retira->setText(QApplication::translate("MainWindow", "Retira", nullptr));
        lbl_pendiente->setText(QString());
        lbl_completo->setText(QString());
        lbl_pagopendiente->setText(QString());
        lbl_pagorealizado->setText(QString());
        lbl_pagoerror->setText(QString());
        lbl_numerofactura->setText(QApplication::translate("MainWindow", "1124554", nullptr));
        lbl_pagorechazado->setText(QString());
        lbl_reqsin->setText(QString());
        lbl_vistoaremitir->setText(QApplication::translate("MainWindow", "Listo", nullptr));
        check_remitir->setText(QString());
        lbl_constock->setText(QString());
        btn_advertencia->setText(QString());
        cantidad_3->setText(QApplication::translate("MainWindow", "Notas:", nullptr));
        descripcion_2->setText(QApplication::translate("MainWindow", "Codigo", nullptr));
        descripcion_3->setText(QApplication::translate("MainWindow", "Cant", nullptr));
        descripcion_4->setText(QApplication::translate("MainWindow", "Stock", nullptr));
        lineEdit->setText(QString());
        check_scroll->setText(QString());
        btn_help->setText(QString());
        groupBox_2->setTitle(QString());
        lista_consultas->setItemText(0, QApplication::translate("MainWindow", "Estado Requerimiento", nullptr));
        lista_consultas->setItemText(1, QApplication::translate("MainWindow", "Fecha de Ingreso", nullptr));
        lista_consultas->setItemText(2, QApplication::translate("MainWindow", "Nombre", nullptr));

        lista_consultas_agrupar->setItemText(0, QApplication::translate("MainWindow", "Sin Filtro", nullptr));
        lista_consultas_agrupar->setItemText(1, QApplication::translate("MainWindow", "Requerimientos Completos", nullptr));
        lista_consultas_agrupar->setItemText(2, QApplication::translate("MainWindow", "Requerimientos Pendientes", nullptr));
        lista_consultas_agrupar->setItemText(3, QApplication::translate("MainWindow", "Sin Requerimientos", nullptr));

        label->setText(QApplication::translate("MainWindow", "Ordernar por:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Filtrar por:", nullptr));
        btn_cambio->setText(QString());
        descripcion_8->setText(QApplication::translate("MainWindow", "Remitos", nullptr));
        lbl_cantpedidos->setText(QApplication::translate("MainWindow", "Pedidos Pendientes:", nullptr));
        descripcion_9->setText(QApplication::translate("MainWindow", "Requerimientos", nullptr));
        btn_requerimiento->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Pedidos), QApplication::translate("MainWindow", "Pedidos", nullptr));
        group_remito->setTitle(QString());
        lbl_remito_numero->setText(QString());
        lbl_remito_empresa->setText(QString());
        lbl_remito_pedido->setText(QString());
        lbl_talonario->setText(QString());
        lbl_remitos_pedido->setText(QString());
        lbl_remito_factura->setText(QString());
        lbl_remito_telefono->setText(QString());
        descripcion_5->setText(QApplication::translate("MainWindow", "Descripcion", nullptr));
        descripcion_6->setText(QApplication::translate("MainWindow", "Cant", nullptr));
        descripcion_7->setText(QApplication::translate("MainWindow", "Codigo", nullptr));
        Acqualogo_2->setText(QString());
        btn_volver->setText(QApplication::translate("MainWindow", "Volver a Pedidos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(General), QApplication::translate("MainWindow", "Requerimientos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
