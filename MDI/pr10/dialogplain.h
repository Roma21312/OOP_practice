#ifndef DIALOGPLAIN_H
#define DIALOGPLAIN_H

#include <QDialog>
#include "Plain.h"

namespace Ui {
class DialogPlain;
}

class DialogPlain : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPlain(QWidget *parent = nullptr);
    ~DialogPlain();

private slots:
    void on_pushButton_2_clicked();
signals:
    void plainCreated(Plain *plain);

private:
    Ui::DialogPlain *ui;
};

#endif // DIALOGPLAIN_H
