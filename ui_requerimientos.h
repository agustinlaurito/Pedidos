/********************************************************************************
** Form generated from reading UI file 'requerimientos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUERIMIENTOS_H
#define UI_REQUERIMIENTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_Requerimientos
{
public:
    QListWidget *list_requerimientos;
    QLabel *label;

    void setupUi(QDialog *Requerimientos)
    {
        if (Requerimientos->objectName().isEmpty())
            Requerimientos->setObjectName(QString::fromUtf8("Requerimientos"));
        Requerimientos->resize(569, 674);
        list_requerimientos = new QListWidget(Requerimientos);
        list_requerimientos->setObjectName(QString::fromUtf8("list_requerimientos"));
        list_requerimientos->setGeometry(QRect(10, 50, 551, 611));
        list_requerimientos->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"font-family: Quicksand;\n"
"font-size: 20pt;"));
        list_requerimientos->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(Requerimientos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 551, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Quicksand"));
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-family: Quicksand;"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Requerimientos);

        QMetaObject::connectSlotsByName(Requerimientos);
    } // setupUi

    void retranslateUi(QDialog *Requerimientos)
    {
        Requerimientos->setWindowTitle(QApplication::translate("Requerimientos", "Dialog", nullptr));
        label->setText(QApplication::translate("Requerimientos", "Productos en produccion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Requerimientos: public Ui_Requerimientos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUERIMIENTOS_H
