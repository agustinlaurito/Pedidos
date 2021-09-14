#ifndef REQUERIMIENTOS_H
#define REQUERIMIENTOS_H

#include <QDialog>
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
#include <QLabel>
#include <Constantes.h>
#include <consultador.h>
#include <qsound.h>
#include <QDateTime>
#include <QMediaPlayer>
#include <qmessagebox.h>

namespace Ui {
class Requerimientos;
}

class Requerimientos : public QDialog
{
    Q_OBJECT

public:
    explicit Requerimientos(QWidget *parent = nullptr);
    ~Requerimientos();

    void llenar_lista();

private slots:
    void on_list_requerimientos_itemClicked(QListWidgetItem *item);

private:
    Ui::Requerimientos *ui;
};

#endif // REQUERIMIENTOS_H
