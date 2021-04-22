#-------------------------------------------------
#
# Project created by QtCreator 2021-04-12T17:12:56
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cadvac_gui
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \        
        createnursewindow.cpp \
        createpatientwindow.cpp \
        createpostwindow.cpp \
        loginwindow.cpp \
        searchnursewindow.cpp \
        searchpatientwindow.cpp \
        searchpostwindow.cpp \
        nursedetailswindow.cpp \
        patientdetailswindow.cpp \
        postdetailswindow.cpp \
        healthsecretarywindow.cpp \
        patientmanagementwindow.cpp \
        nursemanagementwindow.cpp \
        postsmanagementwindow.cpp \
    updateavailablevaccineswindow.cpp \
    updatenurserwindow.cpp \
    updatepatientwindow.cpp \
    updatepostwindow.cpp \
    vaccinesdosestakenwindow.cpp \


HEADERS += \
        ../src/connectdb.h \
        mainwindow.h \
        createnursewindow.h \
        createpatientwindow.h \
        createpostwindow.h \
        loginwindow.h \
        searchnursewindow.h \
        searchpatientwindow.h \
        searchpostwindow.h \
        nursedetailswindow.h \
        patientdetailswindow.h \
        postdetailswindow.h \
        healthsecretarywindow.h \
        patientmanagementwindow.h \
        nursemanagementwindow.h \
        postsmanagementwindow.h \
    updateavailablevaccineswindow.h \
    updatenurserwindow.h \
    updatepatientwindow.h \
    updatepostwindow.h \
    vaccinesdosestakenwindow.h \

FORMS += \
        mainwindow.ui \
        createnursewindow.ui \
        createpatientwindow.ui \
        createpostwindow.ui \
        loginwindow.ui \
        searchnursewindow.ui \
        searchpatientwindow.ui \
        searchpostwindow.ui \
        nursedetailswindow.ui \
        patientdetailswindow.ui \
        postdetailswindow.ui \
        healthsecretarywindow.ui \
        patientmanagementwindow.ui \
        nursemanagementwindow.ui \
        postsmanagementwindow.ui \
    updateavailablevaccineswindow.ui \
    updatenurserwindow.ui \
    updatepatientwindow.ui \
    updatepostwindow.ui \
    vaccinesdosestakenwindow.ui \

