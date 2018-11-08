
/*
   File: main.cpp
   Description:
   Author(s): Laughrey, Raymond. Santillan, Joshua. Tran, Phillip.
   Email: raymondl4963@student.vvc.edu
   Date of Creation:
 */
#include <iostream>
#include<string>
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
double Multiplication(const double& m_x, const double& m_y);
void Print();
};
Rational::Rational()
{
  m_x =0;
  m_y =0;
}
Rational::Rational(double x, double y)
{
   m_x = x;
   m_y = y;
}
double Rational::Adding(const double& x, const double& y)
{
  return x + y;
}
double Rational::Subtraction(const double& x, const double& y)
{
  return x - y;
}
double Rational::Division(const double& x, const double& y)
{
  return x / y;
}
double Rational::Multiplication(const double& x, const double& y)
{
  return x * y;
}

void Rational::Print()
{


}
int main()
{

        return 0;
}
