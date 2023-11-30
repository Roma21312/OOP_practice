#ifndef DIALOGTRAIN_H
#define DIALOGTRAIN_H

#include <QDialog>
#include "PassengerTrain.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

namespace Ui {
class DialogTrain;
}

class DialogTrain : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTrain(DBManager* dbManager, QWidget *parent = nullptr);
    ~DialogTrain();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::DialogTrain *ui;
    DBManager* dbManager;
};

#endif // DIALOGTRAIN_H
