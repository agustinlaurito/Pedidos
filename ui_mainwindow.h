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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QLabel *cantidad;
    QLabel *descripcion;
    QListWidget *listdesc;
    QLabel *lbl_entrega;
    QLabel *label_pic_retira;
    QLabel *label_pic_entrega;
    QListWidget *listcant;
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
    QListWidget *list_stock;
    QLabel *cantidad_2;
    QCheckBox *check_scroll;
    QLabel *lbl_cantpedidos;
    QPushButton *btn_help;
    QWidget *General;

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
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab {\n"
" background: #A3A3A3;\n"
" color: white;\n"
" padding: 10px;\n"
"border-radius: 1px;\n"
"\n"
" }\n"
"\n"
" QTabBar::tab:selected {\n"
"  background: #2FA9E0;\n"
" }"));
        Pedidos = new QWidget();
        Pedidos->setObjectName(QString::fromUtf8("Pedidos"));
        Pedidos->setEnabled(true);
        Pedidos->setStyleSheet(QString::fromUtf8("QTabWidget::pane { \n"
"   border: none;\n"
"}"));
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
        Acqualogo->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/acqualogo.png")));
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
        groupBox->setGeometry(QRect(820, 40, 1111, 931));
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
        check_visto->setGeometry(QRect(1050, 30, 41, 51));
        check_visto->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width:41px;height: 31px;}\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image: url(//servidor/Users/Public/Acquatron Compartida/Andones/Resources/checkboxcheck.png);\n"
"}\n"
"QCheckBox::indicator:unchecked\n"
"{\n"
"    image: url(//servidor/Users/Public/Acquatron Compartida/Andones/Resources/checkboxempty.png);\n"
"}"));
        lbl_visto = new QLabel(A_Grupo2);
        lbl_visto->setObjectName(QString::fromUtf8("lbl_visto"));
        lbl_visto->setGeometry(QRect(1020, 0, 91, 31));
        lbl_visto->setFont(font1);
        lbl_visto->setAlignment(Qt::AlignCenter);
        A_Grupo1 = new QGroupBox(groupBox);
        A_Grupo1->setObjectName(QString::fromUtf8("A_Grupo1"));
        A_Grupo1->setGeometry(QRect(20, 140, 361, 51));
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
        cantidad = new QLabel(groupBox);
        cantidad->setObjectName(QString::fromUtf8("cantidad"));
        cantidad->setGeometry(QRect(20, 320, 61, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Quicksand"));
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setWeight(50);
        cantidad->setFont(font5);
        cantidad->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion = new QLabel(groupBox);
        descripcion->setObjectName(QString::fromUtf8("descripcion"));
        descripcion->setGeometry(QRect(100, 310, 921, 51));
        descripcion->setFont(font5);
        descripcion->setStyleSheet(QString::fromUtf8("border:0;"));
        descripcion->setFrameShape(QFrame::Box);
        descripcion->setAlignment(Qt::AlignCenter);
        listdesc = new QListWidget(groupBox);
        listdesc->setObjectName(QString::fromUtf8("listdesc"));
        listdesc->setGeometry(QRect(100, 360, 921, 561));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listdesc->sizePolicy().hasHeightForWidth());
        listdesc->setSizePolicy(sizePolicy);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Quicksand"));
        font6.setPointSize(18);
        listdesc->setFont(font6);
        listdesc->setStyleSheet(QString::fromUtf8("background: #F2F2F2;\n"
"border-radius: 10px;\n"
"padding: 10px;\n"
"\n"
""));
        listdesc->setFrameShape(QFrame::StyledPanel);
        listdesc->setFrameShadow(QFrame::Raised);
        lbl_entrega = new QLabel(groupBox);
        lbl_entrega->setObjectName(QString::fromUtf8("lbl_entrega"));
        lbl_entrega->setGeometry(QRect(230, 240, 881, 81));
        sizePolicy.setHeightForWidth(lbl_entrega->sizePolicy().hasHeightForWidth());
        lbl_entrega->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Chivo"));
        font7.setPointSize(14);
        lbl_entrega->setFont(font7);
        lbl_entrega->setStyleSheet(QString::fromUtf8(""));
        lbl_entrega->setScaledContents(true);
        lbl_entrega->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_pic_retira = new QLabel(groupBox);
        label_pic_retira->setObjectName(QString::fromUtf8("label_pic_retira"));
        label_pic_retira->setGeometry(QRect(100, 200, 101, 91));
        label_pic_retira->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/delivery-box.png")));
        label_pic_retira->setScaledContents(true);
        label_pic_entrega = new QLabel(groupBox);
        label_pic_entrega->setObjectName(QString::fromUtf8("label_pic_entrega"));
        label_pic_entrega->setGeometry(QRect(100, 210, 101, 91));
        label_pic_entrega->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/truck.png")));
        label_pic_entrega->setScaledContents(true);
        listcant = new QListWidget(groupBox);
        listcant->setObjectName(QString::fromUtf8("listcant"));
        listcant->setGeometry(QRect(20, 360, 61, 561));
        listcant->setFont(font6);
        listcant->setStyleSheet(QString::fromUtf8("background:#F2F2F2;\n"
"border-radius: 10px;\n"
"padding: 10px;"));
        listcant->setFrameShadow(QFrame::Raised);
        listcant->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listcant->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listcant->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        label_pic_advertencia = new QLabel(groupBox);
        label_pic_advertencia->setObjectName(QString::fromUtf8("label_pic_advertencia"));
        label_pic_advertencia->setGeometry(QRect(100, 200, 101, 91));
        label_pic_advertencia->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/advertencia.png")));
        label_pic_advertencia->setScaledContents(true);
        lbl_retira = new QLabel(groupBox);
        lbl_retira->setObjectName(QString::fromUtf8("lbl_retira"));
        lbl_retira->setGeometry(QRect(110, 290, 91, 21));
        sizePolicy.setHeightForWidth(lbl_retira->sizePolicy().hasHeightForWidth());
        lbl_retira->setSizePolicy(sizePolicy);
        QFont font8;
        font8.setFamily(QString::fromUtf8("Chivo"));
        font8.setPointSize(16);
        lbl_retira->setFont(font8);
        lbl_retira->setStyleSheet(QString::fromUtf8(""));
        lbl_retira->setScaledContents(true);
        lbl_retira->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        lbl_pendiente = new QLabel(groupBox);
        lbl_pendiente->setObjectName(QString::fromUtf8("lbl_pendiente"));
        lbl_pendiente->setGeometry(QRect(420, 140, 61, 61));
        lbl_pendiente->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/pendiente.png")));
        lbl_pendiente->setScaledContents(true);
        lbl_completo = new QLabel(groupBox);
        lbl_completo->setObjectName(QString::fromUtf8("lbl_completo"));
        lbl_completo->setGeometry(QRect(420, 140, 61, 61));
        lbl_completo->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/verificado.png")));
        lbl_completo->setScaledContents(true);
        lbl_pagopendiente = new QLabel(groupBox);
        lbl_pagopendiente->setObjectName(QString::fromUtf8("lbl_pagopendiente"));
        lbl_pagopendiente->setGeometry(QRect(510, 140, 71, 61));
        lbl_pagopendiente->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/pago_pendien.png")));
        lbl_pagopendiente->setScaledContents(true);
        lbl_pagorealizado = new QLabel(groupBox);
        lbl_pagorealizado->setObjectName(QString::fromUtf8("lbl_pagorealizado"));
        lbl_pagorealizado->setGeometry(QRect(510, 140, 71, 61));
        lbl_pagorealizado->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/pago_check.png")));
        lbl_pagorealizado->setScaledContents(true);
        lbl_pagoerror = new QLabel(groupBox);
        lbl_pagoerror->setObjectName(QString::fromUtf8("lbl_pagoerror"));
        lbl_pagoerror->setGeometry(QRect(510, 140, 71, 61));
        lbl_pagoerror->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/pago_no_existente.png")));
        lbl_pagoerror->setScaledContents(true);
        lbl_numerofactura = new QLabel(groupBox);
        lbl_numerofactura->setObjectName(QString::fromUtf8("lbl_numerofactura"));
        lbl_numerofactura->setGeometry(QRect(870, 140, 231, 51));
        lbl_numerofactura->setFont(font2);
        lbl_numerofactura->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background: #F2F2F2;\n"
"padding: 8px;"));
        lbl_numerofactura->setAlignment(Qt::AlignCenter);
        lbl_pagorechazado = new QLabel(groupBox);
        lbl_pagorechazado->setObjectName(QString::fromUtf8("lbl_pagorechazado"));
        lbl_pagorechazado->setGeometry(QRect(510, 140, 71, 61));
        lbl_pagorechazado->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/pago_rechazdo.png")));
        lbl_pagorechazado->setScaledContents(true);
        lbl_reqsin = new QLabel(groupBox);
        lbl_reqsin->setObjectName(QString::fromUtf8("lbl_reqsin"));
        lbl_reqsin->setGeometry(QRect(420, 140, 61, 61));
        lbl_reqsin->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/sinrequerimiento.png")));
        lbl_reqsin->setScaledContents(true);
        lbl_vistoaremitir = new QLabel(groupBox);
        lbl_vistoaremitir->setObjectName(QString::fromUtf8("lbl_vistoaremitir"));
        lbl_vistoaremitir->setGeometry(QRect(790, 190, 91, 21));
        lbl_vistoaremitir->setFont(font1);
        check_remitir = new QCheckBox(groupBox);
        check_remitir->setObjectName(QString::fromUtf8("check_remitir"));
        check_remitir->setGeometry(QRect(820, 140, 41, 51));
        check_remitir->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width:41px;height: 31px;}\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image: url(//servidor/Users/Public/Acquatron Compartida/Andones/Resources/checkboxcheck.png);\n"
"}\n"
"QCheckBox::indicator:unchecked\n"
"{\n"
"    image: url(//servidor/Users/Public/Acquatron Compartida/Andones/Resources/checkboxempty.png);\n"
"}"));
        list_stock = new QListWidget(groupBox);
        list_stock->setObjectName(QString::fromUtf8("list_stock"));
        list_stock->setGeometry(QRect(1040, 360, 61, 561));
        list_stock->setFont(font6);
        list_stock->setStyleSheet(QString::fromUtf8("background:#F2F2F2;\n"
"border-radius: 10px;\n"
"padding: 2px;"));
        list_stock->setFrameShadow(QFrame::Raised);
        list_stock->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        list_stock->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        list_stock->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        cantidad_2 = new QLabel(groupBox);
        cantidad_2->setObjectName(QString::fromUtf8("cantidad_2"));
        cantidad_2->setGeometry(QRect(1030, 320, 71, 31));
        cantidad_2->setFont(font5);
        cantidad_2->setStyleSheet(QString::fromUtf8("border:0;"));
        check_scroll = new QCheckBox(Pedidos);
        check_scroll->setObjectName(QString::fromUtf8("check_scroll"));
        check_scroll->setGeometry(QRect(1550, 990, 41, 31));
        check_scroll->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {width:37px;height: 27px;}\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image: url(//servidor/Users/Public/Acquatron Compartida/Andones/Resources/checkboxcheck.png);\n"
"}\n"
"QCheckBox::indicator:unchecked\n"
"{\n"
"    image: url(//servidor/Users/Public/Acquatron Compartida/Andones/Resources/checkboxempty.png);\n"
"}"));
        check_scroll->setChecked(true);
        lbl_cantpedidos = new QLabel(Pedidos);
        lbl_cantpedidos->setObjectName(QString::fromUtf8("lbl_cantpedidos"));
        lbl_cantpedidos->setGeometry(QRect(1220, 990, 251, 31));
        lbl_cantpedidos->setFont(font1);
        btn_help = new QPushButton(Pedidos);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(1610, 980, 51, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_help->setIcon(icon1);
        btn_help->setIconSize(QSize(500, 36));
        btn_help->setFlat(true);
        tabWidget->addTab(Pedidos, QString());
        General = new QWidget();
        General->setObjectName(QString::fromUtf8("General"));
        tabWidget->addTab(General, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Pedidos Pendientes", nullptr));
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
        cantidad->setText(QApplication::translate("MainWindow", "Cant", nullptr));
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
        lbl_vistoaremitir->setText(QApplication::translate("MainWindow", "Remitible", nullptr));
        check_remitir->setText(QString());
        cantidad_2->setText(QApplication::translate("MainWindow", "Stock", nullptr));
        check_scroll->setText(QString());
        lbl_cantpedidos->setText(QApplication::translate("MainWindow", "Pedidos Pendientes:", nullptr));
        btn_help->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Pedidos), QApplication::translate("MainWindow", "Pedidos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(General), QApplication::translate("MainWindow", "Requerimientos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
