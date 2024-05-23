#ifndef DISPLAYBPMVIEW_H
#define DISPLAYBPMVIEW_H

#include "updater.h"
#include <QProgressBar>

class DisplayBPMView : public Updater {
  Q_OBJECT

public:
  explicit DisplayBPMView(QObject *parent = nullptr);
  void show();
public slots:
  void updateBPM(int bpm);

private:
  QProgressBar m_widget;
};

#endif // DISPLAYBPMVIEW_H
