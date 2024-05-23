
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  auto mainWindow = new MainWindow();
  mainWindow->show();
  // ui выбор
  // plugins

  // controller.setConsoleView(&consoleView);

  return app.exec();
}
