/*
CH-230-A
a10 p8.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Complex.h"

int main() {
    int x;
    Complex c1,c2;

    //read and sotre the data of the first instance
    std::cout<<"real part of c1: ";
    std::cin>>x;
    c1.setReal(x);
    std::cout<<"imaginary part of c1: ";
    std::cin>>x;
    c1.setImag(x);

    //read and sotre the data of the first instance
    std::cout<<"real part of c2: ";
    std::cin>>x;
    c2.setReal(x);
    std::cout<<"imaginary part of c2: ";
    std::cin>>x;
    c2.setImag(x);

    //print the conjugate of the first instance
    std::cout<<"The conjugate of c1: ";
    (c1.conj()).print();

    //print the sum of the two instances
    std::cout<<"The sum of c1 and c2: ";
    (c1.add(c2)).print();

    //print the difference of the two instances
    std::cout<<"The  difference between c1 and c2: ";
    (c1.sub(c2)).print();
    
    //print the multiplication of the two instances
    std::cout<<"The  multiplication of c1 and c2: ";
    (c1.mult(c2)).print();

    return 0;
}
