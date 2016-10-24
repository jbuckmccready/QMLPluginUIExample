#include "pluginonemodel.h"

PluginOneModel::PluginOneModel(QObject *parent) : QObject(parent) {}

QString PluginOneModel::title() const { return QString("Plugin One's Title"); }
