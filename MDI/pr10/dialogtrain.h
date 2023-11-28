#ifndef DIALOGTRAIN_H
#define DIALOGTRAIN_H

#include <QDialog>
#include "PassengerTrain.h"

namespace Ui {
class DialogTrain;
}

class DialogTrain : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTrain(QWidget *parent = nullptr);
    ~DialogTrain();

private slots:
    void on_pushButton_2_clicked();
signals:
    void trainCreated(PassengerTrain *train);

private:
    Ui::DialogTrain *ui;
};

#endif // DIALOGTRAIN_H
