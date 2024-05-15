QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    msqlcfg.cpp \
    student.cpp \
    studenttablemodel.cpp \
    stuwindow.cpp

HEADERS += \
    mainwindow.h \
    msqlcfg.h \
    student.h \
    studenttablemodel.h \
    stuwindow.h

FORMS += \
    mainwindow.ui \
    stuwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    database.ini
