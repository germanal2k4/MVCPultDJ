#include "bpmcontroller.h"

BPMController::BPMController(BPMModel *model, ControlBPMView *controlView,
                             QObject *parent)
    : m_model(model), m_controlView(controlView), QObject(parent) {
  m_Updater = nullptr;
  connect(model, &BPMModel::bpmChanged, this, &BPMController::updateDisplay);
  connect(m_controlView, &ControlBPMView::setBPM, m_model,
          &BPMModel::handleSetBPM);
  connect(m_controlView, &ControlBPMView::increaseBPM, m_model,
          &BPMModel::handleIncreaseBPM);
  connect(m_controlView, &ControlBPMView::decreaseBPM, m_model,
          &BPMModel::handleDecreaseBPM);
}

void BPMController::updateDisplay(int bpm) { m_Updater->updateBPM(bpm); }

void BPMController::setView(Updater *view) {

  m_controlView->show();
  if (m_Updater) {
    disconnect(m_model, &BPMModel::bpmChanged, m_Updater, &Updater::updateBPM);
  }
  m_Updater = view;
  connect(m_model, &BPMModel::bpmChanged, m_Updater, &Updater::updateBPM);
  m_Updater->show();
}
