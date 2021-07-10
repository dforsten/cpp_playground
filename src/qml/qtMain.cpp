#include <QGuiApplication>
#include <QtQuick>

int main(int argc, char *argv[])
{
  QGuiApplication app(argc, argv);
  QQuickView view;
  view.setSource(QUrl("../../src/qml/main.qml"));
  view.show();

  return app.exec();// this runs the main event loop and sees to it that cleanup is done
}
