/*
CH-230-A
a11 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

int main()
{ 
    std::cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    std::cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //Create new Bigfoot type object using Bigfoot class
    //and calling two constructors, one inherited from base class
    //and one declared inside Bigfoot
    std::cout << "\nCreating a Bigfoot.\n";
    Bigfoot b;
    b.run();
    b.size();

    //Create new Hydra type object using Hydra class
    //and calling two constructors, one inherited from base class
    //and one declared inside Hydra
    std::cout << "\nCreating a Hydra.\n";
    Hydra h;
    h.run();
    h.headcount();

    return 0;
} 