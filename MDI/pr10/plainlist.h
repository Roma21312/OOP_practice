#ifndef PLAINLIST_H
#define PLAINLIST_H

#include <QDialog>

#include "Plain.h"

namespace Ui {
class PlainList;
}

class PlainList : public QDialog
{
    Q_OBJECT

public:
    explicit PlainList(QWidget *parent = nullptr);
    ~PlainList();

private:
    Ui::PlainList *ui;

public slots:
    void addItem(Plain * plain);
};

#endif // PLAINLIST_H
