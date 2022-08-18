/*
CH-230-A
a12 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <string>
#include "TournamentMember.h"

std::string TournamentMember::location = "Bremen";

//CONSTRUCTORS FOR TOURNAMENT MEMBER

//empty constructor
TournamentMember::TournamentMember() {
    std::cout<<"Tournamen member Empty constructor is being called."
    <<std::endl;
    strcpy(fname, "default first name");
    strcpy(lname, "default last name");
    strcpy(dob, "1969-04-20");
    strcpy(role, "bench");
    rank = 18;
}

//parameter constructor
TournamentMember::TournamentMember(char f[], char l[], char d[], char r[], 
  int ra) {
    std::cout<<"Tournament Member Parameter constructor is being called."\
    <<std::endl;
    strcpy(fname, f);
    strcpy(lname, l);
    strcpy(dob, d);
    strcpy(role, r);
    rank = ra;
}

//copy constructor
TournamentMember::TournamentMember(const TournamentMember& src) {
    std::cout<<"Tournament Member Copy constructor is being called."
    <<std::endl;
    strcpy(fname, src.fname);
    strcpy(lname, src.lname);
    strcpy(dob, src.dob);
    strcpy(role, src.role);
    rank = src.rank;
}

//destructor
TournamentMember::~TournamentMember(){
    std::cout<<"Tournament Member Destructor is being called."<<std::endl;
}

//print method for Tournament Player
void TournamentMember::print() const {
    std::cout<<"The participant "<<fname<<" "<<lname<<", born in "<<dob<<
    " is playing "<<role<<" in "<<location<<". He is ranked "<<rank
    <<"."<<std::endl;
}

//CONSTRUCTORS FOR PLAYER

//parameter constructor
Player::Player(char fn[], char ln[], char d[], char r[], int ra, int num, 
                char pos[], int go, char f[]) : TournamentMember(fn, 
                ln, d, r, ra) {
        std::cout<<"Player parameter constructor was called."<<std::endl;
        number = num;
        strcpy(position,pos);
        goals = go;
        strcpy(foot,f);
} 

//empty constructor
Player::Player() : TournamentMember() {
    std::cout<<"Player empty constructor was called."<<std::endl;
    number = 0;
    strcpy(position, "default position");
    goals = 0;
    strcpy(foot, "right-foot");
}          

//copy constructor
Player::Player(const Player& src) : TournamentMember(src) {
    std::cout<<"Player copy constructor was called."<<std::endl;
    number = src.number;
    strcpy(position, src.position);
    goals = src.goals;
    strcpy(foot, src.foot);
}             

//destructor
Player::~Player() {
    std::cout<<"Player destructor was called."<<std::endl;
}    

//method for imcrementing the number of goals
void Player::incGoals() {
    goals++;
}

//print method
void Player::printPlayer() const {
    std::cout<<"This player has the number "<<number<<". The position is "<<
    position<<". The Player has scored "<<goals<<" goals, and is "<<foot<<
    ". He plays in "<<getLocation()<<"."<<std::endl;
}