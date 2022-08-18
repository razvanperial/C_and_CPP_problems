/*
CH-230-A
a11 p4.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

int main()
{ 
    std::string s;
    while(s != "quit"){
        if(s == "Wizard"){
            std::cout << "\nCreating a Wizard.\n";

            //allocate memory for the object
            Wizard* w = new Wizard;

            //call the methods
            w->run();
            w->hover(); 

            //deallocate the memory
            delete w;
        }
        else if (s == "Bigfoot"){
            std::cout << "\nCreating a Bigfoot.\n";

            //allocate memory for the object
            Bigfoot *b = new Bigfoot;

            //call the methods
            b->run();
            b->size();

            //deallocate the memory
            delete b;
        }
        else if (s == "Hydra"){
            std::cout << "\nCreating a Hydra.\n";

            //allocate memory for the object
            Hydra *h = new Hydra;

            //call the methods
            h->run();
            h->headcount();

            //deallocate the memory
            delete h;
        }
        
        //read next input
        std::cout<<"Input: ";
        std::cin>>s;
    }

    return 0;
} 