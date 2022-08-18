/*
CH-230-A
a12 p5.[cpp]
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

//implement greatest common divisor by a recursive function
//using substraction (euclidian algorithm)
int Fraction::gcd(int a, int b)
{
	a = abs(a);
	b = abs(b);

	if(a < b)
		return gcd(b, a);
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
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
		std::cout << "Denomenator not valid. Enter a not null one: ";
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

//overloading the + operator
Fraction operator+(Fraction& f1, Fraction& f2) {
	Fraction f3;
	int aux = f1.lcm(f1.den,f2.den);
	f3.num = f1.num * aux / f1.den + f2.num * aux / f2.den;
	f3.den = aux;
	return f3;
}

//overloading the - operator
Fraction operator-(Fraction& f1, Fraction& f2) {
	Fraction f3;
	int aux = f1.lcm(f1.den,f2.den);
	f3.num = f1.num * aux / f1.den - f2.num * aux / f2.den;
	f3.den = aux;
	return f3;
}

//overloading the = operator
Fraction& Fraction::operator=(const Fraction& src) {
	this->num = src.num;
	this->den = src.den;	
	return *this; 
}

//if you substract the two fractions from one another, the sign of 
//the result will indicate which one is bigger or smaller

//overloading the > operator
bool operator >(Fraction& f1, Fraction& f2) {
  	return ((f1 - f2).num > 0);
}

//overloading the < operator
bool operator <(Fraction& f1, Fraction& f2) {
  	return ((f1 - f2).num < 0);
}