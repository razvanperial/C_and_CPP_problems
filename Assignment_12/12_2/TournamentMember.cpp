/*
CH-230-A
a12 p2.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <string>
#include "TournamentMember.h"

std::string TournamentMember::location = "Bremen";

//CONSTRUCTORS

//empty constructor
TournamentMember::TournamentMember() {
    std::cout<<"Empty constructor is being called."<<std::endl;
    strcpy(fname, "default first name");
    strcpy(lname, "default last name");
    strcpy(dob, "1969-04-20");
    strcpy(role, "bench");
    rank = 18;
}

//parameter constructor
TournamentMember::TournamentMember(char f[], char l[], char d[], char r[], 
  int ra) {
    std::cout<<"Parameter constructor is being called."<<std::endl;
    strcpy(fname, f);
    strcpy(lname, l);
    strcpy(dob, d);
    strcpy(role, r);
    rank = ra;
}

//copy constructor
TournamentMember::TournamentMember(const TournamentMember& src) {
    std::cout<<"Copy constructor is being called."<<std::endl;
    strcpy(fname, src.fname);
    strcpy(lname, src.lname);
    strcpy(dob, src.dob);
    strcpy(role, src.role);
    rank = src.rank;
}

//destructor
TournamentMember::~TournamentMember(){
    std::cout<<"Destructor is being called."<<std::endl;
}

//print method
void TournamentMember::print() const {
    std::cout<<"The participant "<<fname<<" "<<lname<<", born in "<<dob<<
    " is playing "<<role<<" in "<<location<<". He is ranked "<<rank
    <<"."<<std::endl;
}