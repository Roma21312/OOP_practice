#include "mainwindow.h"

#include "dbmanager.h"
#include "sqlitedbmanager.h"

#include <QApplication>
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QtDebug>

void customMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QFile logFile("log.txt");
    if (logFile.open(QIODevice::WriteOnly | QIODevice::Append)) {
        QTextStream stream(&logFile);
        switch (type) {
        case QtInfoMsg:
            stream << "Info: ";
            break;
        case QtDebugMsg:
            stream << "Debug: ";
            break;
        case QtWarningMsg:
            stream << "Warning: ";
            break;
        case QtCriticalMsg:
            stream << "Critical: ";
            break;
        case QtFatalMsg:
            stream << "Fatal: ";
            break;
        }

        stream << msg << " (" << context.file << ":" << context.line << ", " << context.function
               << ")\n";
        logFile.close();
    }
}

int main(int argc, char* argv[]) {
    QApplication application(argc, argv);

    qInstallMessageHandler(customMessageHandler);

    DBManager *dbManager = SqliteDBManager::getInstance();

    dbManager->connectToDataBase();

    MainWindow window(dbManager);
    window.show();

    return application.exec();
}
