#include "calculatorinterface.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorInterface w;
    w.show();
    return a.exec();
}
