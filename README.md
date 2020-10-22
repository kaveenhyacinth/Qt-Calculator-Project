# Qt-Calculator-Project

## TASK 1

In this tutorial you have to create a calculator that allows the user to sum 2 integer
numbers.
You are required to design your project by following a Model/View approach. This means
that you have to separate the operations made by the calculator on the data (numbers), e.g.
sum, and the operation of the user interface that you need in order to enter and display the
data.

To do this, you need to have at least two classes on your project, one for the GUI and one
for the actual calculation. As an example, you can have:
- the class `CalculatorInterface` that inherits from QWidget. This is the class that holds
all the user interaction and display operations.
- The class `Calculator` that performs calculations.

Note that the two classes have to communicate in some way, since you need to pass the
numbers from the class CalculatorInterface to the class Calculator in order to make the
calculation. The same form of communication is needed to display the results of the
calculation of the screen.

Your calculator should have a
- Clear button, to reinitialize the data and give the user the possibility to make a new
calculation;
- Plus button, for adding to number;
- Minus button, for subtracting two numbers;
- Equal button, that displays the result.
- As a general requirement, you need to add all the buttons for entering numbers.

Design carefully the structure of the project. This will reduce enormously the time spent on
writing the code. Try to keep in mind possible extensions and design it accordingly.

## TASK 2

Copy the relevant file (.pro, .ui, .h, .cpp) on an external support and switch Operating
System.

Open the .pro file with the Qt Creator and build and run the application (try to solve any
building issue yourself, if you can). Be sure it runs as expected under the other OS.

After the integer calculator is fully functional, you can improve the current application with
the following extensions:
- more operations (e.g. multiplication and division);
- support for entering negative numbers;
- support for floating point numbers.

Depending on the initial design of your application, extending its functionalities can be easy
(good modular design) or quite hard, since it might require to rewrite many part of the
code.

## Cross-platform test:

Copy the relevant file (.pro, .ui, .h, .cpp) on an external support and switch Operating
System.

Open the .pro file with the Qt Creator and build and run the application (try to solve any
building issue yourself, if you can). Be sure it runs as expected under the other OS.
