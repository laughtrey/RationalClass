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
Rational(double x, double y); //If we have this?
double Adding(const double& m_x, const double& m_y);
double Subtraction(const double& m_x, const double& m_y);
double Division(const double& m_x, const double& m_y);
double Multiplication(const double& m_x, double& m_y);
std::string Print();
};

Rational::Rational(double x, double y)
{
   m_x = x;
   m_y = y;
}
int main()
{

        return 0;
}
