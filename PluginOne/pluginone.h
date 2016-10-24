#ifndef PLUGINONE_H
#define PLUGINONE_H
#include <QQuickItem>

#include "plugincomponentinterface.h"
#include <QtPlugin>

class PluginOne : public QObject, public PluginComponentInterface {
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
#endif // PLUGINONE_H
