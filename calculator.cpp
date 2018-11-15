#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

//This is my own part of code
//added to calculate.cpp file.
//It was done after executing
//cherry-pick git command
int Calculate::Div (double a, double b)
{
	return a / b + 0.5;
}
