#include "plugincomponentinterface.h"
#include <QDebug>
#include <QDir>
#include <QGuiApplication>
#include <QObject>
#include <QPluginLoader>
#include <QQmlComponent>
#include <QQmlEngine>
#include <QtQuick>

QList<PluginComponentInterface *> loadPlugins() {
  QDir pluginsDir(qApp->applicationDirPath());
  pluginsDir.cd("../../Plugins");
  QList<PluginComponentInterface *> pluginList;
  for (const auto &fileName : pluginsDir.entryList(QDir::Files)) {
    QPluginLoader pluginLoader(pluginsDir.absoluteFilePath(fileName));
    QObject *plugin = pluginLoader.instance();
    if (plugin) {
      PluginComponentInterface *interface =
          qobject_cast<PluginComponentInterface *>(plugin);
      if (interface) {
        pluginList.append(interface);
      }
    }
  }

  return pluginList;
}

int main(int argc, char *argv[]) {
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  QGuiApplication app(argc, argv);
  QQmlEngine engine;
  QQmlComponent component(&engine, QUrl("qrc:/main.qml"));
  QObject *rootObject = component.create();

  QQuickItem *mainView = rootObject->findChild<QQuickItem *>("mainView");
  QQuickItem *tabHeaderView = rootObject->findChild<QQuickItem *>("tabHeaderView");
  QList<PluginComponentInterface *> plugins = loadPlugins();
  for (const auto &plugin : plugins) {
    QQmlContext *context = new QQmlContext(&engine);
    context->setContextProperty(plugin->modelPropertyName(),
                                plugin->pluginModel());
    // inject plugin root view
    QQmlComponent pluginRootView(&engine, QUrl(plugin->rootQmlPath()));
    QObject *componentRoot = pluginRootView.create(context);
    QQuickItem *root_as_item = qobject_cast<QQuickItem *>(componentRoot);
    root_as_item->setParentItem(mainView);

    // inject plugin header view
    QQmlComponent pluginHeaderView(&engine, QUrl(plugin->headerQmlPath()));
    QObject *componentHeader = pluginHeaderView.create(context);
    QQuickItem *header_as_item = qobject_cast<QQuickItem *>(componentHeader);
    header_as_item->setParentItem(tabHeaderView);
  }
  tabHeaderView->setProperty("currentIndex", 1);
  tabHeaderView->setProperty("currentIndex", 0);
  return app.exec();
}
