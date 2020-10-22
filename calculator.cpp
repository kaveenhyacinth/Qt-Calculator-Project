#include "calculator.h"

Calculator::Calculator()
{
    this->firstNo = 0;
    this->secondNo = 0;
    this->addition = false;
    this->substraction = false;
}

void Calculator::setFirstNo(int no) {
    this->firstNo = no;
}

void Calculator::setSecondNo(int no) {
    this->secondNo = no;
}

void Calculator::additionMode() {
    this->addition = true;
}

void Calculator::substractionMode() {
    this->substraction = true;
}

void Calculator::calculate() {
    if(addition) {
        this->result = firstNo + secondNo;
    }
    else if(substraction) {
        this->result = firstNo - secondNo;
    } else {
        this->result = 1;
    }
}

int Calculator::getResult()
{
    return this->result;
}

int Calculator::getFirstNo()
{
    return this->firstNo;
}
