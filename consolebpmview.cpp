#include "consolebpmview.h"

ConsoleBPMView::ConsoleBPMView(QObject *parent)
    : Updater(parent), currentBPM(120) {
  consoleTimer = new QTimer(this);
  connect(consoleTimer, &QTimer::timeout, this,
          &ConsoleBPMView::displayBPMInConsole);
}
void ConsoleBPMView::show() { consoleTimer->start(1000); }
void ConsoleBPMView::updateBPM(int bpm) { currentBPM = bpm; }

void ConsoleBPMView::displayBPMInConsole() {
  std::string bpmStr(currentBPM, '*');
  std::cout << "[" << bpmStr << "]" << std::endl;
}
