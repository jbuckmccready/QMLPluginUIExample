#ifndef PLUGINTWOMODEL_H
#define PLUGINTWOMODEL_H

#include <QObject>

class PluginTwoModel : public QObject {
  Q_OBJECT
  Q_PROPERTY(QString title READ title CONSTANT)
public:
  explicit PluginTwoModel(QObject *parent = 0);
  QString title() const;

signals:

public slots:
};

#endif // PLUGINTWOMODEL_H
