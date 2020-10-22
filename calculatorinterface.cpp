#include "calculatorinterface.h"
#include "ui_calculatorinterface.h"

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


void CalculatorInterface::on_one_clicked()
{
    QString s1 = ui->display->text();
    s1.append('1');
    ui->display->setText(s1);
}

void CalculatorInterface::on_plus_clicked()
{
    QString val = ui->display->text();
    double temp = val.toDouble();

    calc->setFirstNo(temp);

    ui->display->clear();
}

void CalculatorInterface::on_result_clicked()
{
    QString val = ui->display->text();
    double temp = val.toDouble();

    ui->display->clear();

    calc->setSecondNo(temp);

    double tempRes = calc->calculate();
    QString res = QString::number(tempRes);

    ui->display->setText(res);

}
