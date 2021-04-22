QT += core gui widgets testlib sql

CONFIG += qt warn_on depend_includepath testcase c++11

DEFINES += QT_DEPRECATED_WARNINGS

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

TARGET = autoTeste.pro

SOURCES += \
        tst_testegui.cpp \
        ../src/patient_impl.cpp \
        ../src/posts_impl.cpp \
        ../src/user_impl.cpp \
        ../cadvac_gui/mainwindow.cpp \
        ../cadvac_gui/createnursewindow.cpp \
        ../cadvac_gui/createpatientwindow.cpp \
        ../cadvac_gui/createpostwindow.cpp \
        ../cadvac_gui/loginwindow.cpp \
        ../cadvac_gui/searchnursewindow.cpp \
        ../cadvac_gui/searchpatientwindow.cpp \
        ../cadvac_gui/searchpostwindow.cpp \
        ../cadvac_gui/nursedetailswindow.cpp \
        ../cadvac_gui/patientdetailswindow.cpp \
        ../cadvac_gui/postdetailswindow.cpp \
        ../cadvac_gui/healthsecretarywindow.cpp \
        ../cadvac_gui/patientmanagementwindow.cpp \
        ../cadvac_gui/nursemanagementwindow.cpp \
        ../cadvac_gui/postsmanagementwindow.cpp \
        ../cadvac_gui/updateavailablevaccineswindow.cpp \
        ../cadvac_gui/updatenurserwindow.cpp \
        ../cadvac_gui/updatepatientwindow.cpp \
        ../cadvac_gui/updatepostwindow.cpp \
        ../cadvac_gui/vaccinesdosestakenwindow.cpp \

HEADERS += \
        ../src/connectdb.h \
        ../src/patient.h \
        ../src/posts.h \
        ../src/user.h \
        ../src/patient_impl.h \
        ../src/posts_impl.h \
        ../src/user_impl.h \
        ../cadvac_gui/mainwindow.h \
        ../cadvac_gui/createnursewindow.h \
        ../cadvac_gui/createpatientwindow.h \
        ../cadvac_gui/createpostwindow.h \
        ../cadvac_gui/loginwindow.h \
        ../cadvac_gui/searchnursewindow.h \
        ../cadvac_gui/searchpatientwindow.h \
        ../cadvac_gui/searchpostwindow.h \
        ../cadvac_gui/nursedetailswindow.h \
        ../cadvac_gui/patientdetailswindow.h \
        ../cadvac_gui/postdetailswindow.h \
        ../cadvac_gui/healthsecretarywindow.h \
        ../cadvac_gui/patientmanagementwindow.h \
        ../cadvac_gui/nursemanagementwindow.h \
        ../cadvac_gui/postsmanagementwindow.h \
        ../cadvac_gui/updateavailablevaccineswindow.h \
        ../cadvac_gui/updatenurserwindow.h \
        ../cadvac_gui/updatepatientwindow.h \
        ../cadvac_gui/updatepostwindow.h \
        ../cadvac_gui/vaccinesdosestakenwindow.h \

FORMS += \
        ../cadvac_gui/mainwindow.ui \
        ../cadvac_gui/createnursewindow.ui \
        ../cadvac_gui/createpatientwindow.ui \
        ../cadvac_gui/createpostwindow.ui \
        ../cadvac_gui/loginwindow.ui \
        ../cadvac_gui/searchnursewindow.ui \
        ../cadvac_gui/searchpatientwindow.ui \
        ../cadvac_gui/searchpostwindow.ui \
        ../cadvac_gui/nursedetailswindow.ui \
        ../cadvac_gui/patientdetailswindow.ui \
        ../cadvac_gui/postdetailswindow.ui \
        ../cadvac_gui/healthsecretarywindow.ui \
        ../cadvac_gui/patientmanagementwindow.ui \
        ../cadvac_gui/nursemanagementwindow.ui \
        ../cadvac_gui/postsmanagementwindow.ui \
        ../cadvac_gui/updateavailablevaccineswindow.ui \
        ../cadvac_gui/updatenurserwindow.ui \
        ../cadvac_gui/updatepatientwindow.ui \
        ../cadvac_gui/updatepostwindow.ui \
        ../cadvac_gui/vaccinesdosestakenwindow.ui \

INCLUDEPATH += $$PWD/../src/
INCLUDEPATH += $$PWD/../cadvac_gui/
