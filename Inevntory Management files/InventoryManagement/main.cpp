

#include "myinventory.h"
#include <QApplication>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     MyInventory w;
    w.show();
    return a.exec();
}
