#include "bpmmodel.h"

BPMModel::BPMModel(QObject *parent) : QObject(parent), currentBPM(120) {}

int BPMModel::getBPM() const { return currentBPM; }

void BPMModel::setBPM(int bpm) {
  if (bpm != currentBPM) {
    currentBPM = bpm;
    emit bpmChanged(bpm);
  }
}

void BPMModel::handleSetBPM(int bpm) { this->setBPM(bpm); }

void BPMModel::handleIncreaseBPM() { this->setBPM(this->getBPM() + 1); }

void BPMModel::handleDecreaseBPM() { this->setBPM(this->getBPM() - 1); }
