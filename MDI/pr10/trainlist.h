#ifndef TRAINLIST_H
#define TRAINLIST_H

#include <QDialog>

#include "PassengerTrain.h"

namespace Ui {
class TrainList;
}

class TrainList : public QDialog
{
    Q_OBJECT

public:
    explicit TrainList(QWidget *parent = nullptr);
    ~TrainList();

private:
    Ui::TrainList *ui;

public slots:
    void addItem(PassengerTrain * train);
};

#endif // TRAINLIST_H
