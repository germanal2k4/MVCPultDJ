#ifndef UPDATER_H
#define UPDATER_H

#include <QObject>
#include <QtPlugin>

class Updater : public QObject {
  Q_OBJECT
public:
  Updater(QObject *parent);
  virtual ~Updater() {}
  virtual void show() = 0;
public slots:
  virtual void updateBPM(int bpm) = 0;
};
#define UpdaterInterface_iid "MVCPultDJ.Updater"
Q_DECLARE_INTERFACE(Updater, UpdaterInterface_iid)

#endif // UPDATER_H
