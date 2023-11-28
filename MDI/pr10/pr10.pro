QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    PassengerTrain.cpp \
    PassengerTransport.cpp \
    Plain.cpp \
    dialogplain.cpp \
    dialogtrain.cpp \
    main.cpp \
    mainwindow.cpp \
    plainlist.cpp \
    trainlist.cpp

HEADERS += \
    PassengerTrain.h \
    PassengerTransport.h \
    Plain.h \
    dialogplain.h \
    dialogtrain.h \
    mainwindow.h \
    plainlist.h \
    trainlist.h

FORMS += \
    dialogplain.ui \
    dialogtrain.ui \
    mainwindow.ui \
    plainlist.ui \
    trainlist.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target