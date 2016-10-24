#ifndef PLUGINCOMPONENTINTERFACE_H
#define PLUGINCOMPONENTINTERFACE_H
#include <QObject>
#include <QString>

class PluginComponentInterface {
public:
  virtual ~PluginComponentInterface() {}
  virtual QString pluginName() = 0;
  virtual QString rootQmlPath() = 0;
  virtual QString headerQmlPath() = 0;
  virtual QObject *pluginModel() = 0;
  virtual QString modelPropertyName() = 0;
};
#define PluginComponentInterface_iid "interfaces.plugincomponent"

Q_DECLARE_INTERFACE(PluginComponentInterface, PluginComponentInterface_iid)

#endif // PLUGINCOMPONENTINTERFACE_H
