#ifndef CONTROLBPMVIEW_H
#define CONTROLBPMVIEW_H

#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

class ControlBPMView : public QWidget {
  Q_OBJECT

public:
  explicit ControlBPMView(QWidget *parent = nullptr);

signals:
  void setBPM(int bpm);
  void increaseBPM();
  void decreaseBPM();

private slots:
  void onSetButtonClicked();
  void onIncreaseButtonClicked();
  void onDecreaseButtonClicked();

private:
  QLineEdit *m_bpmInput;
  QPushButton *m_setButton;
  QPushButton *m_increaseButton;
  QPushButton *m_decreaseButton;
};

#endif // CONTROLBPMVIEW_H
