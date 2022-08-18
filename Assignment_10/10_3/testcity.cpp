/*
CH-230-A
a10 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

int main(){
    //declare the instances of the class City
    City Bremen, Paris, London;

    //declare the names of the cities and mayors and store them in variables
    std::string n1 = "Bremen",n2 = "Paris",n3 = "London", 
    m1 = "Andreas Bovenschulte",m2 = "Anne Hidalgo",m3 = "Sadiq Khan";

    //set the values for each city

    //Bremen
    Bremen.setArea(326.7);
    Bremen.setInhabitants(569352);
    Bremen.setCityName(n1);
    Bremen.setMayorName(m1);

    //Paris
    Paris.setArea(1052);
    Paris.setInhabitants(2161000);
    Paris.setCityName(n2);
    Paris.setMayorName(m2);

    //Lonodn
    London.setArea(1572);
    London.setInhabitants(8982000);
    London.setCityName(n3);
    London.setMayorName(m3);

    //print the information about the cities
    Bremen.print();
    London.print();
    Paris.print();


    return 0;
}