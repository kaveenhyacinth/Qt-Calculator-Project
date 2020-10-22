#include "calculator.h"

Calculator::Calculator()
{
    firstNo = 0.0;
    secondNo = 0.0;
    addition = false;
    substraction = false;
}

void Calculator::setFirstNo(double no) {
    firstNo = no;
}

void Calculator::setSecondNo(double no) {
    secondNo = no;
}

void Calculator::additionMode() {
    addition = true;
}

void Calculator::substractionMode() {
    substraction = true;
}

double Calculator::calculate() {

    double flag;

    if(addition) {
        flag = firstNo + secondNo;
    }
    else if(substraction) {
        flag = firstNo - secondNo;
    }
    else {
        flag = 0.0;
    }

    return flag;
}
