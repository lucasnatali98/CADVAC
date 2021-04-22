QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SUBDIRS += \
    src \
    cadvac_gui \

SOURCES +=  tst_testgui.cpp
