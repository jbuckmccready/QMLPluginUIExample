#ifndef PLUGINONEMODEL_H
#define PLUGINONEMODEL_H

#include <QObject>

class PluginOneModel : public QObject {
  Q_OBJECT
  Q_PROPERTY(QString title READ title CONSTANT)
public:
  explicit PluginOneModel(QObject *parent = 0);
  QString title() const;

signals:

public slots:
};

#endif // PLUGINONEMODEL_H
