/*
   File: main.cpp
   Description:
   Author(s): Laughrey, Raymond. Santillan, Joshua. Tran, Phillip.
   Email: raymondl4963@student.vvc.edu
   Date of Creation:
 */
#include <iostream>

class Rational
{
private:

double m_x,m_y;

public:
Rational(); //Do we need this?
Rational (double x, double y); //If we have this?
void Adding(double x, double y);
void Subtraction(double x, double y);
void Division(double x, double y);
void Multiplication(double x, double y);
void Exponentiation(double x, double y);
void Modulous(double x, double y);
void Print();
};

int main()
{

        return 0;
}
