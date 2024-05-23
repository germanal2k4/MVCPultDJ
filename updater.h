#ifndef UPDATER_H
#define UPDATER_H

#include <QObject>

class Updater : public QObject {
  Q_OBJECT
public:
  Updater(QObject *parent);
  virtual ~Updater() {}
  virtual void show() = 0;
public slots:
  virtual void updateBPM(int bpm) = 0;
};

#endif // UPDATER_H
