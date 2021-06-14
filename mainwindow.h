#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
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


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSettings *ini = new QSettings("//servidor/Users/Public/Acquatron Compartida/Andones/Resources/pedidos.ini", QSettings::IniFormat);


    void popular_pedidos();

    void popular_items();

    void Busca_Escribe(int fila);

    void burocratizar(int x);

    void mostrar_info(QString texto);

private slots:
    void on_listWidget_currentItemChanged();
    
    void on_listdesc_currentRowChanged(int currentRow);

    void funcionActivacionTimer();

    void on_check_remitir_clicked();

    void on_check_visto_clicked();

    void on_check_scroll_toggled(bool checked);


    void on_btn_cambiotab_clicked();

    void on_btn_help_clicked();

    void on_btn_advertencia_clicked();

    void on_lineEdit_editingFinished();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
