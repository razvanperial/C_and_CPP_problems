/*
CH-230-A
a13 a8.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
//motor class
class Motor {
    public: 
        Motor() {   
            //throwing error in the default constructor
            throw "This motor has problems\n";    
        }
};

//car class
class Car {
    private:
        //pointer that will store a motor object
        Motor* motor;
    public:
        //initialinze the motor object in the default constructor
        Car(){motor = new Motor();}
    
};

class Garage {
    private:
        //pointer that will store a car object
        Car* car;
    public:
        Garage(){
            try{
                //initialinze the motor object in the default constructor
                //which will throw a const char* error from the Motor class
                car = new Car();
            }
            catch(char const*){
                //catch the error and throw a different message
                throw "The car in this garage has problems with the motor\n";
            }
        }
};

int main() {
    try{
        //create the garage object that will throw a const char* error
        Garage gar;
    }
    catch(const char* c) {
        //catch the error and print it in the cerr output
        std::cerr << "Error: " << c;
    }
    return 0;
}
