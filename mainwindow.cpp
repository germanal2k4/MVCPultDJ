#include <QPluginLoader>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "bpmmodel.h"
#include "consolebpmview.h"
#include "controlbpmview.h"
#include "displaybpmview.h"


class Updater;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  controller = new BPMController(new BPMModel(), new ControlBPMView());
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButton_clicked() {
    QPluginLoader loader("build/libConsoleBPMView.dylib");
    QObject *plugin = loader.instance();
    auto *updater = qobject_cast<ConsoleBPMView *>(plugin);
    controller->setView(updater);
}

void MainWindow::on_pushButton_2_clicked() {
    QPluginLoader loader("build/libDisplayBPMView.dylib");
    QObject *plugin = loader.instance();
    auto *updater = qobject_cast<DisplayBPMView *>(plugin);
    controller->setView(updater);
}

void MainWindow::on_comboBox_activated(int index) {
//  if (index == 0) {
//    auto display = new DisplayBPMView();
//    controller->setView(display);
//  }
//  if (index == 1) {
//    auto cli = new ConsoleBPMView();
//    controller->setView(cli);
//  }
}
