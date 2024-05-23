#ifndef BPMCONTROLLER_H
#define BPMCONTROLLER_H

#include "bpmmodel.h"
#include "controlbpmview.h"
#include "updater.h"
#include <QObject>

class BPMController : public QObject {
  Q_OBJECT

public:
  explicit BPMController(BPMModel *model, ControlBPMView *controlView,
                         QObject *parent = nullptr);
  void setView(Updater *view);
private slots:
  void updateDisplay(int bpm);

private:
  BPMModel *m_model;
  Updater *m_Updater;
  ControlBPMView *m_controlView;
};

#endif // BPMCONTROLLER_H
