/*
CH-230-A
a12 p5.[cpp]
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

    //print the bigger faraction
    if(a > b)
        cout<<"The bigger fraction is: "<<a;
    else 
        cout<<"The bigger fraction is: "<<b;

    //printing the sum and difference of the two numbers using the overloaded
    //operators + , - and <<, also storing the result in other objects
    Fraction c = a-b;
    Fraction d = a+b;

    cout<<"The sum of a and b is: "<<d;
    cout<<"The difference of a and b is: "<<c;

    return 0;
}