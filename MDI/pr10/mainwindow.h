#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogtrain.h"
#include "trainlist.h"
#include "dialogplain.h"
#include "plainlist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_CreateTrainButton_clicked();
    void on_createObjectTrain(PassengerTrain*);
    void on_TrainListButton_clicked();

    void on_CreatePlainButton_clicked();
    void on_createObjectPlain(Plain*);
    void on_PlainListButton_clicked();

signals:
    void trainCreated(PassengerTrain*);
    void plainCreated(Plain*);

private:
    Ui::MainWindow *ui;
    DialogTrain *dialogTrain;
    QVector<PassengerTrain*> trains;
    TrainList* trainList;
    DialogPlain *dialogPlain;
    QVector<Plain*> plains;
    PlainList* plainList;
};
#endif // MAINWINDOW_H
