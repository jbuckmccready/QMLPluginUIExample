#include "plugintwo.h"
#include "plugintwomodel.h"

QString PluginTwo::pluginName() { return QString("PluginTwo"); }

QString PluginTwo::rootQmlPath() { return QString("qrc:/plugintwo/main.qml"); }

QString PluginTwo::headerQmlPath() { return QString("qrc:/plugintwo/mainheader.qml"); }

QObject *PluginTwo::pluginModel() { return new PluginTwoModel(); }

QString PluginTwo::modelPropertyName() { return QString("model"); }
