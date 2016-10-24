#include "pluginone.h"
#include "pluginonemodel.h"

QString PluginOne::pluginName() { return QString("PluginOne"); }

QString PluginOne::rootQmlPath() { return QString("qrc:/pluginone/main.qml"); }

QString PluginOne::headerQmlPath() {
  return QString("qrc:/pluginone/mainheader.qml");
}

QString PluginOne::modelPropertyName() { return QString("model"); }

QObject *PluginOne::pluginModel() { return new PluginOneModel(); }
