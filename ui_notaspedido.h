/********************************************************************************
** Form generated from reading UI file 'notaspedido.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTASPEDIDO_H
#define UI_NOTASPEDIDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_notaspedido
{
public:
    QLabel *lbl_imagen;
    QLineEdit *edit_nota;

    void setupUi(QDialog *notaspedido)
    {
        if (notaspedido->objectName().isEmpty())
            notaspedido->setObjectName(QString::fromUtf8("notaspedido"));
        notaspedido->resize(483, 560);
        lbl_imagen = new QLabel(notaspedido);
        lbl_imagen->setObjectName(QString::fromUtf8("lbl_imagen"));
        lbl_imagen->setGeometry(QRect(30, 30, 401, 461));
        lbl_imagen->setPixmap(QPixmap(QString::fromUtf8("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/post-it.png")));
        lbl_imagen->setScaledContents(true);
        edit_nota = new QLineEdit(notaspedido);
        edit_nota->setObjectName(QString::fromUtf8("edit_nota"));
        edit_nota->setGeometry(QRect(40, 120, 371, 241));
        QFont font;
        font.setFamily(QString::fromUtf8("Quicksand"));
        font.setPointSize(16);
        edit_nota->setFont(font);
        edit_nota->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0); \n"
""));
        edit_nota->setFrame(false);
        edit_nota->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(notaspedido);

        QMetaObject::connectSlotsByName(notaspedido);
    } // setupUi

    void retranslateUi(QDialog *notaspedido)
    {
        notaspedido->setWindowTitle(QApplication::translate("notaspedido", "Notas", nullptr));
        lbl_imagen->setText(QString());
        edit_nota->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class notaspedido: public Ui_notaspedido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTASPEDIDO_H
