#include "displaybpmview.h"
#include <QLabel>
#include <QProgressBar>
#include <QVBoxLayout>
#include <QWidget>

DisplayBPMView::DisplayBPMView(QObject *parent) : Updater(parent) {
  // m_bpmProgressBar = new QProgressBar(this);

  // auto label = new QLabel("BPM", this);
  // auto layout = new QVBoxLayout(this);
  // layout->addWidget(m_bpmProgressBar);
  // layout->addWidget(label);
  // setLayout(layout);
  // setWindowTitle("Display BPM");
  // m_bpmProgressBar->show();
  m_widget.setRange(0, 200);
  m_widget.setValue(120);
}




void DisplayBPMView::updateBPM(int bpm) { m_widget.setValue(bpm); }

void DisplayBPMView::show() { m_widget.show(); }
