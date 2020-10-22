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

    void handleInputNumbers(char);

private slots:
    void on_one_clicked();

    void on_plus_clicked();

    void on_result_clicked();

    void on_two_clicked();

    void on_zero_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_clear_clicked();

    void on_minus_clicked();

private:
    Ui::CalculatorInterface *ui;
    Calculator *calc;
};

#endif // CALCULATORINTERFACE_H
