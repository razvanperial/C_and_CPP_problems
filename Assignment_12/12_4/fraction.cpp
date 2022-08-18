/*
CH-230-A
a12 p4.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

//overloaded operator <<
std::ostream& operator<<(std::ostream& os, const Fraction& f)
{
    os << f.num << '/' << f.den << std::endl;
    return os;
}

//overloaded operator >>
std::istream& operator>>(std::istream& is, Fraction& f)
{
    is >> f.num >> f.den;
	while(f.den == 0){
		std::cout << "Denominator not valid. Enter a not null one: ";
		is >>f.den;
	}
	return is;
}

//overloading the * operator
Fraction operator*(Fraction& f1, Fraction& f2) {
	Fraction f3;
	f3.num = f1.num*f2.num;
	f3.den = f1.den*f2.den;
	return f3;
}

//overloading the / operator
Fraction operator/(Fraction& f1, Fraction& f2) {
	Fraction f3;
	f3.num = f1.num*f2.den;
	f3.den = f1.den*f2.num;
	return f3;
}