#ifndef CONSULTADOR_H
#define CONSULTADOR_H

#include <QMainWindow>
#include <QMainWindow>
#include <QtWidgets>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlDriver>
#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QTableView>
#include <QtSql/QSqlError>
#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>
#include <QScroller>
#include <QScrollBar>
#include <QPixmap>
#include <QTimer>
#include <QSettings>


class Consultador
{
public:

    QString order_by = "";
    QString group_by = "WHERE pedidos.estado=0 AND pedidos.ID>200 GROUP BY pedidos.ID ";

    Consultador();

    QSqlQuery QueryNormal();

    QSqlQuery QueryNormal_items();

    QSqlQuery QueryRemitos();

    QSqlQuery QueryRemitos_items();

    QSqlQuery QueryRequerimientos();

    void Set_OrderBy(int in);

    void Set_GroupBy(int in);

    void complete_requerimiento(QString num);



};

#endif // CONSULTADOR_H
