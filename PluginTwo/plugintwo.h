#ifndef PLUGINTWO_H
#define PLUGINTWO_H
#include <QQuickItem>

#include "plugincomponentinterface.h"
#include <QtPlugin>

class PluginTwo : public QObject, public PluginComponentInterface {
  Q_OBJECT
  Q_PLUGIN_METADATA(IID "interfaces.plugincomponent")
  Q_INTERFACES(PluginComponentInterface)
public:
  QString pluginName() override;
  QString rootQmlPath() override;
  QString headerQmlPath() override;
  QObject *pluginModel() override;
  QString modelPropertyName() override;
};
#endif // PLUGINTWO_H
