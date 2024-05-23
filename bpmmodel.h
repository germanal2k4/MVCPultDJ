#ifndef BPMMODEL_H
#define BPMMODEL_H

#include <QObject>

class BPMModel : public QObject {
  Q_OBJECT

public:
  explicit BPMModel(QObject *parent = nullptr);

  int getBPM() const;
  void setBPM(int bpm);

signals:
  void bpmChanged(int bpm);

public slots:
  void handleSetBPM(int bpm);
  void handleIncreaseBPM();
  void handleDecreaseBPM();

private:
  int currentBPM;
};

#endif // BPMMODEL_H
