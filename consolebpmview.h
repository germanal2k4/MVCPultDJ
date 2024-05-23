#ifndef CONSOLEBPMVIEW_H
#define CONSOLEBPMVIEW_H

#include "updater.h"
#include <QObject>
#include <QTimer>
#include <iostream>

class ConsoleBPMView : public Updater {
  Q_OBJECT

public:
  explicit ConsoleBPMView(QObject *parent = nullptr);
  void show();
public slots:
  void updateBPM(int bpm);

private slots:
  void displayBPMInConsole();

private:
  int currentBPM;
  QTimer *consoleTimer;
};

#endif // CONSOLEBPMVIEW_H
