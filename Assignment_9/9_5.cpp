/*
CH-230-A
a9 p5.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    int tries = 0;
    int randomNumber, guess;
    char name[100];

    std::cout<<"Your name: ";
    std::cin>>name;

    // init random number generator
    srand(static_cast < unsigned int >(time(0)));

    //pick a random number between 1 and 100
    randomNumber = (rand() % 100) +1;

    do{
        //get guess from player
        std::cout<<"pick number from 1 to 100: ";
        std::cin>>guess;

        //print if the number chosen is too high or too low
        if(guess > randomNumber)
            std::cout<<"Guess too high!"<<'\n';
        else if(guess < randomNumber)
            std::cout<<"Guess too low!"<<'\n';

        //increment number of tries
        tries++;

    }while(guess != randomNumber);

    //Congratulate player
    std::cout<<"Congrats!"<<'\n';

    return 0;
}