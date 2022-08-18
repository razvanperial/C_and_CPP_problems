/*
CH-230-A
a11 p4.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

//Creature constructor
Creature::Creature(): distance(10)
{
    std::cout<<"\nCalled constructor from Creature class.\n";
} 
//Creature destructor
Creature::~Creature(){
    std::cout<<"\nCreature destructor was called\n";
}   
//Creature method
void Creature::run() const
{ 
    std::cout<<"\nCalled run method from Creature class.\n";
    std::cout << "running " << distance << " meters!\n";
} 

//wizard constructor
Wizard::Wizard() : distFactor(3)
{
    std::cout<<"\nCalled constructor from Wizard class.\n";
}  
//Wizrad destructor
Wizard::~Wizard(){
    std::cout<<"\nWizard destructor was called\n";
}
//wizard method
void Wizard::hover() const
{
    std::cout<<"\nCalled hover method from Wizard class.\n";
    std::cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//bigfoot constructor
Bigfoot::Bigfoot() : footsize(53.5)
{
    std::cout<<"\nCalled constructor from Bigfoot class.\n";
}  
//bigfoot destructor
Bigfoot::~Bigfoot(){
    std::cout<<"\nBigfoot destructor was called\n";
}

//bigfoot method
void Bigfoot::size () const{
    std::cout<<"\nCalled size method from Bigfoot class.\n";
    std::cout<<"Wears size "<<footsize<<".\n";
}

//Hydra constructor
Hydra::Hydra() : heads(9)
{
    std::cout<<"\nCalled constructor from Hydra class.\n";
}  
//Hydra destructor 
Hydra::~Hydra(){
    std::cout<<"\nHydra destructor was called\n";
}
//Hydra method
void Hydra::headcount () const{
    std::cout<<"\nCalled headcount method from Hydra class.\n";
    std::cout<<"Has "<<heads<<" heads"<<".\n";
}