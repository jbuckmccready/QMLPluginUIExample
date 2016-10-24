#include "plugintwomodel.h"

PluginTwoModel::PluginTwoModel(QObject *parent) : QObject(parent) {}

QString PluginTwoModel::title() const { return QString("Plugin Two's Title"); }
