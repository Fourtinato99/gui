#include "git.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    git w;
    w.show();
    return a.exec();
}
