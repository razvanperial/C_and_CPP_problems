/*
CH-230-A
a12 p4.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    //declaring the two fractional numbers and reading them using the
    //overloaded operator >>
	Fraction a,b;
    cout<<"Enter numerator and denominator of a: ";
    cin >> a;
    cout<<"Enter numerator and denominator of b: ";
    cin >> b;

    //printing the product and division od the two numbers using the overloaded
    //operators / and * 
    
    cout<<"Product of a and b is: "<<a*b;
    cout<<"Division of a and b is: "<<a/b;

    return 0;
}