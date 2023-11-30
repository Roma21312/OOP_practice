#ifndef DIALOGPLAIN_H
#define DIALOGPLAIN_H

#include <QDialog>
#include "Plain.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

namespace Ui {
class DialogPlain;
}

class DialogPlain : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPlain(DBManager* dbManager, QWidget *parent = nullptr);
    ~DialogPlain();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::DialogPlain *ui;
    DBManager* dbManager;
};

#endif // DIALOGPLAIN_H
