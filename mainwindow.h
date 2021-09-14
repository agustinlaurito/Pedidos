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
#include <Constantes.h>
#include <consultador.h>
#include <qsound.h>
#include <QDateTime>
#include <QMediaPlayer>
#include <requerimientos.h>


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
    Consultador consultador;


    Consultador remitos;

    QSqlQuery query_remitos;
    QSqlQuery query_remitos_items;
    QSqlQuery query_pedidositems;

    bool hay_stock(int pedido);

    void play_alarma();

    void play_cheer();

    void popular_pedidos();

    void popular_items();

    void Busca_Escribe(int fila);

    void burocratizar(int x);

    void mostrar_info(QString texto);

    void Abrir_ODBC();

    void popular_remitos();

    void popular_remitositems();

private slots:
    void on_listWidget_currentItemChanged();

    void funcionActivacionTimer();

    void on_check_remitir_clicked();

    void on_check_visto_clicked();

    void on_check_scroll_toggled(bool checked);


    void on_btn_cambiotab_clicked();

    void on_btn_help_clicked();

    void on_btn_advertencia_clicked();

    void on_lineEdit_editingFinished();

    void on_lista_consultas_currentIndexChanged(int index);

    void on_lista_consultas_agrupar_currentIndexChanged(int index);

    void on_list_cant_currentRowChanged(int currentRow);

    void on_list_codigo_currentRowChanged(int currentRow);

    void on_list_desc_currentRowChanged(int currentRow);

    void on_list_stock_currentRowChanged(int currentRow);

    void on_btn_cambio_clicked();

    void on_lista_remitos_currentRowChanged(int currentRow);

    void on_btn_volver_clicked();

    void on_btn_requerimiento_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
