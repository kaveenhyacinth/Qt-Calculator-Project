#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
    public:
        Calculator();
        void setFirstNo(double);
        void setSecondNo(double);
        void additionMode();
        void substractionMode();
        double calculate();
    private:
        double firstNo;
        double secondNo;
        double result;
        //TODO: use switch instead bool
        bool addition;
        bool substraction;
};

#endif // CALCULATOR_H
