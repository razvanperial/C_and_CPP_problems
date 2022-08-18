/*
CH-230-A
a12 p4.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen

	//I overoaded all the parameters using the frined function

	//overloading the << operator
	friend std::ostream& operator<<(std::ostream &os, const Fraction& f);

	//overloading the >> operator
	friend std::istream& operator>>(std::istream& is, Fraction& f);

	//overloading the * operator
	friend Fraction operator*(Fraction& f1, Fraction& f2);

	//overloading the / operator
	friend Fraction operator/(Fraction& f1, Fraction& f2);
};


#endif /* FRACTION_H_ */