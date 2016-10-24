TEMPLATE = lib
TARGET = PluginOne
QT += qml quick
CONFIG += qt plugin c++11

TARGET = $$qtLibraryTarget($$TARGET)

INCLUDEPATH    += ../PluginShell

SOURCES += \
    pluginone.cpp \
    pluginonemodel.cpp

HEADERS += \
    pluginone.h \
    pluginonemodel.h \

DESTDIR = ../Plugins

DISTFILES +=

RESOURCES += \
    qml.qrc
