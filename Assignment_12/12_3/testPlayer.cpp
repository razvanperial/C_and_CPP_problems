/*
CH-230-A
a12 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream> 
#include "TournamentMember.h"

int main(){
    //declare parameters for the first player
    char fn1[] = "Mike", ln1[] = "Santon", dob1[] = "1987-06-23", 
    role1[] = "captain", pos1[] = "forward", foot1[] = "left-footed";
    Player p1(fn1, ln1, dob1, role1, 1, 15, pos1, 500, foot1);

    //declare parameters for the second player
    char fn2[] = "Shawn", ln2[] = "Mendes", dob2[] = "1990-10-17", 
    role2[] = "player", pos2[] = "defender", foot2[] = "right-footed";
    Player p2(fn2, ln2, dob2, role2, 2, 23, pos2, 370, foot2);

    //declare parameters for the third player
    char fn3[] = "John", ln3[] = "Wick", dob3[] = "1983-12-30", 
    role3[] = "president", pos3[] = "forward", foot3[] = "right-footed";
    Player p3(fn3, ln3, dob3, role3, 3, 30, pos3, 600, foot3);

    //print the players
    p1.printPlayer();
    p2.printPlayer();
    p3.printPlayer();

    //declare the location Hamburg and change it for every player
    std::string l = "Hamburg";
    p1.setLocation(l);

    //increment number of goals for p1
    p1.incGoals();

    //print the players again
    p1.printPlayer();
    p2.printPlayer();
    p3.printPlayer();    

    return 0;
}