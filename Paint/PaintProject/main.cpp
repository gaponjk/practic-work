
#include "paintwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaintWindow w;
    w.show();
    return a.exec();
}
