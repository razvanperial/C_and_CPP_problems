/*
CH-230-A
a12 p2.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

int main(){
    char n[] = "Luke", ln[] = "Skywalker", d[] = "1996-03-04", r[] = "striker";
    TournamentMember m1;                //member created with empty constructor
    TournamentMember m2(n, ln, d, r, 3);//member created with empty constructor
    TournamentMember m3 = m2;           //member created with copy constructor

    std::cout<<"m1: ";
    m1.print();
    std::cout<<"m2: ";
    m2.print();
    std::cout<<"m3: ";
    m3.print();
    return 0;
}