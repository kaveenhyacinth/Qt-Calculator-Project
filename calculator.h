#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
    public:
        Calculator();
        void setFirstNo(int);
        void setSecondNo(int);
        void additionMode();
        void substractionMode();
        void calculate();
        int getResult();
    private:
        int firstNo;
        int secondNo;
        int result;
        bool addition;
        bool substraction;
};

#endif // CALCULATOR_H
