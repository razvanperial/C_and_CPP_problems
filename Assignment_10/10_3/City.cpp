/*
CH-230-A
a10 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "City.h"

void City::setCityName(std::string& newCityName) {
    cityName = newCityName;
}

void City::setMayorName(std::string& newMayorName) {
    mayorName = newMayorName;
}

void City::setInhabitants(int newInhabitants) {
    inhabitants = newInhabitants;
}

void City::setArea(float newArea) {
    area = newArea;
}

int City::getInhabitants() {
    return inhabitants;
}

float City::getArea() {
    return area;
}

std::string City::getCityName() {
    return  cityName; 
}

std::string City::getMayorName() {
    return mayorName;
}

void City::print() {
    std::cout<<"Welcome to "<<cityName<<". This city has an area of "<<area
    <<" square km. The mayor's name is "<<mayorName<<". It also has "<<
    inhabitants<<" inhabitants."<<std::endl;
}

