#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QVector>
#include "dialogtrain.h"
#include "trainlist.h"
#include "dialogplain.h"
#include "plainlist.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(DBManager* dbManager, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_CreateTrainButton_clicked();
    void on_TrainListButton_clicked();

    void on_CreatePlainButton_clicked();
    void on_PlainListButton_clicked();

private:
    Ui::MainWindow *ui;

    DialogTrain *dialogTrain;
    TrainList* trainList;
    DialogPlain *dialogPlain;
    PlainList* plainList;

    DBManager* dbManager;
};
#endif // MAINWINDOW_H
