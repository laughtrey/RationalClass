/*
   File: main.cpp
   Description: Class Object that solves rational equations through multiple functions and prints using a void function
   Author(s): Laughrey, Raymond. Santillan, Joshua. Tran, Phillip.
   Email: raymondl4963@student.vvc.edu
   Date of Creation: 11/7/18
 */
#include <iostream>

class Rational
{
	public:
		Rational(); //Do we need this?
		Rational(double x, double y); //If we have this?
		double Adding(const double& m_x, const double& m_y); // addition
		double Subtraction(const double& m_x, const double& m_y); // subtraction
		double Division(const double& m_x, const double& m_y); // division
		double Multiplication(const double& m_x, double& m_y); // multiplication
		void Print(); // void function to print to screen

	private:
		double m_x, m_y;
};

Rational::Rational()
{
	m_x = 0.0;
	m_y = 0.0;
}

Rational::Rational(double x, double y)
{
   	m_x = x;
   	m_y = y;
}

double Rational::Adding(const double& m_x, const double& m_y)
{
	return (m_x + m_y);
}

double Rational::Subtraction(const double& m_x, const double& m_y)
{
	return (m_x - m_y);	
}

double Rational::Division(const double& m_x, const double& m_y)
{
	return (m_x / m_y);
}

double Rational::Multiplication(const double& m_x, double& m_y)
{
	return (m_x * m_y);
}

void Rational::Print() // prints the math operations using arithmetic signs
{
	std::cout << m_x << " + " << m_y << " = " << Adding(m_x, m_y) << "\n";
	std::cout << m_x << " - " << m_y << " = " << Subtraction(m_x, m_y) << "\n";
	std::cout << m_x << " / " << m_y << " = " << Division(m_x, m_y) << "\n";
	std::cout << m_x << " * " << m_y << " = " << Multiplication(m_x, m_y) << "\n";
}

int main()
{
	Rational alpha(5.0, -3.0); // creates an object in rational called alpha hardcoding 5 and -3 to get back rational #s
	alpha.Print(); // prints out the expressions
       return 0;
}
