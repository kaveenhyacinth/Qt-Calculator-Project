#ifndef CALCULATORINTERFACE_H
#define CALCULATORINTERFACE_H

#include <QMainWindow>
#include "calculator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CalculatorInterface; }
QT_END_NAMESPACE

class CalculatorInterface : public QMainWindow
{
    Q_OBJECT

public:
    CalculatorInterface(QWidget *parent = nullptr);
    ~CalculatorInterface();

private slots:
    void on_one_clicked();

    void on_plus_clicked();

    void on_result_clicked();

private:
    Ui::CalculatorInterface *ui;
    Calculator *calc;
};

#endif // CALCULATORINTERFACE_H
