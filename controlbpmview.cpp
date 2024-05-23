#include "ControlBPMView.h"

ControlBPMView::ControlBPMView(QWidget *parent) : QWidget(parent) {
  m_bpmInput = new QLineEdit(this);
  m_setButton = new QPushButton("Set", this);
  m_increaseButton = new QPushButton(">>", this);
  m_decreaseButton = new QPushButton("<<", this);

  QVBoxLayout *mainLayout = new QVBoxLayout(this);
  QHBoxLayout *buttonLayout = new QHBoxLayout();

  mainLayout->addWidget(m_bpmInput);
  mainLayout->addWidget(m_setButton);
  buttonLayout->addWidget(m_decreaseButton);
  buttonLayout->addWidget(m_increaseButton);
  mainLayout->addLayout(buttonLayout);

  setLayout(mainLayout);
  setWindowTitle("Control BPM");

  connect(m_setButton, &QPushButton::clicked, this,
          &ControlBPMView::onSetButtonClicked);
  connect(m_increaseButton, &QPushButton::clicked, this,
          &ControlBPMView::onIncreaseButtonClicked);
  connect(m_decreaseButton, &QPushButton::clicked, this,
          &ControlBPMView::onDecreaseButtonClicked);
}

void ControlBPMView::onSetButtonClicked() {
  int bpm = m_bpmInput->text().toInt();
  emit setBPM(bpm);
  m_bpmInput->setText("");
}

void ControlBPMView::onIncreaseButtonClicked() { emit increaseBPM(); }

void ControlBPMView::onDecreaseButtonClicked() { emit decreaseBPM(); }
