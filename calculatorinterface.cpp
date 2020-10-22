#include "calculatorinterface.h"
#include "ui_calculatorinterface.h"

#include <iostream>

CalculatorInterface::CalculatorInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculatorInterface)
{
    ui->setupUi(this);

}

CalculatorInterface::~CalculatorInterface()
{
    delete ui;
}

void CalculatorInterface::handleInputNumbers(char val)
{
    QString s = ui->display->text();
    s.append(val);
    ui->display->setText(s);
}

void CalculatorInterface::on_zero_clicked()
{
    handleInputNumbers('0');
}

void CalculatorInterface::on_one_clicked()
{
    handleInputNumbers('1');
}

void CalculatorInterface::on_two_clicked()
{
    handleInputNumbers('2');
}

void CalculatorInterface::on_three_clicked()
{
    handleInputNumbers('3');
}

void CalculatorInterface::on_four_clicked()
{
    handleInputNumbers('4');
}

void CalculatorInterface::on_five_clicked()
{
    handleInputNumbers('5');
}

void CalculatorInterface::on_six_clicked()
{
    handleInputNumbers('6');
}

void CalculatorInterface::on_seven_clicked()
{
    handleInputNumbers('7');
}

void CalculatorInterface::on_eight_clicked()
{
    handleInputNumbers('8');
}

void CalculatorInterface::on_nine_clicked()
{
    handleInputNumbers('9');
}

void CalculatorInterface::on_plus_clicked()
{
    QString val = ui->display->text();
    int temp = val.toInt();

    calc->setFirstNo(temp);
    calc->additionMode();

    ui->display->clear();
}

void CalculatorInterface::on_minus_clicked()
{
    QString val = ui->display->text();
    int temp = val.toInt();

    calc->setFirstNo(temp);
    calc->substractionMode();

    ui->display->clear();
}

void CalculatorInterface::on_result_clicked()
{
    QString val = ui->display->text();
    int temp = val.toInt();

    ui->display->clear();

    calc->setSecondNo(temp);

    int tempRes = calc->getResult();
//    std::cout << calc->getResult() << std::endl;
    std::cout << temp << std::endl;
    QString res = QString::number(tempRes);

    ui->display->setText("5");

}

void CalculatorInterface::on_clear_clicked()
{
    ui->display->clear();
    calc->setFirstNo(0);
    calc->setSecondNo(0);
}


