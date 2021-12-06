#include "change_led.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    change_led w;
    w.show();

    return a.exec();
}
