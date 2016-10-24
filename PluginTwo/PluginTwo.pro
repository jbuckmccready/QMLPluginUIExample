TEMPLATE = lib
TARGET = PluginTwo
QT += qml quick
CONFIG += qt plugin c++11

TARGET = $$qtLibraryTarget($$TARGET)

INCLUDEPATH    += ../PluginShell

SOURCES += \
    plugintwo.cpp \
    plugintwomodel.cpp

HEADERS += \
    plugintwo.h \
    plugintwomodel.h \

DESTDIR = ../Plugins

DISTFILES +=

RESOURCES += \
    qml.qrc
