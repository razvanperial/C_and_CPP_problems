/*
CH-230-A
a11 p2.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>

using namespace std;

//base class
class Creature {
	public:
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{
    cout<<"\nCalled constructor from Creature class.\n";
}    

void Creature::run() const
{ 
    cout<<"\nCalled run method from Creature class.\n";
    cout << "running " << distance << " meters!\n";
}  

Creature::~Creature(){
    cout<<"\nCreature destructor was called\n";
}

//wizard - first derived class
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout<<"\nCalled constructor from Wizard class.\n";
}  

Wizard::~Wizard(){
    cout<<"\nWizard destructor was called\n";
}

void Wizard::hover() const
{
    cout<<"\nCalled hover method from Wizard class.\n";
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//bigfoot - second derived class
class Bigfoot : public Creature {
    public:
        Bigfoot();
        void size () const;
        ~Bigfoot();
    
    private:
        float footsize;
};

//bigfoot default constructor
Bigfoot::Bigfoot() : footsize(53.5)
{
    cout<<"\nCalled constructor from Bigfoot class.\n";
}  

//bigfoot destructor
Bigfoot::~Bigfoot(){
    cout<<"\nBigfoot destructor was called\n";
}

//bigfoot method
void Bigfoot::size () const{
    cout<<"\nCalled size method from Bigfoot class.\n";
    cout<<"Wears size "<<footsize<<".\n";
}

//hydra - third derived class
class Hydra : public Creature {
    public:
        Hydra();
        void headcount() const;
        ~Hydra();
    
    private:
        int heads;
};

//Hydra default constructor
Hydra::Hydra() : heads(9)
{
    cout<<"\nCalled constructor from Hydra class.\n";
}  

//Hydra destructor 
Hydra::~Hydra(){
    cout<<"\nHydra destructor was called\n";
}

//Hydra method
void Hydra::headcount () const{
    cout<<"\nCalled headcount method from Hydra class.\n";
    cout<<"Has "<<heads<<" heads"<<".\n";
}

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //Create new Bigfoot type object using Bigfoot class
    //and calling two constructors, one inherited from base class
    //and one declared inside Bigfoot
    cout << "\nCreating a Bigfoot.\n";
    Bigfoot b;
    b.run();
    b.size();

    //Create new Hydra type object using Hydra class
    //and calling two constructors, one inherited from base class
    //and one declared inside Hydra
    cout << "\nCreating a Hydra.\n";
    Hydra h;
    h.run();
    h.headcount();

    return 0;
} 