#include "mainwindow.h"

#include "dbmanager.h"
#include "sqlitedbmanager.h"

#include <QApplication>
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QtDebug>

int main(int argc, char* argv[]) {
    QApplication application(argc, argv);

    DBManager *dbManager = SqliteDBManager::getInstance();

    dbManager->connectToDataBase();

    MainWindow window(dbManager);
    window.show();

    return application.exec();
}
