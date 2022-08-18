/*
CH-230-A
a9 p9.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

//function for replacing the vowels
std::string vowel_rep(std::string s){
    for(long unsigned i = 0; i < s.length(); i++){
        //checks if it is a vowel and if so, replaces it with '_'
        if(strchr("aeiouAEIOU", s[i]))
            s[i] = '_';
    }
    return s;
}

int main(){
    //declare the array of strings
    std::string a[17] = {"computer", "television", "keyboard", "laptop", "mouse",
                    "tree", "stethoscope", "pepe", "markiplier", "pewdiepie",
                    "meme", "system", "please", "grade", "this", "homework", 
                    "good" };
    
    //variable used for storing the guesses of the player
    std::string guess;

    //counter of the number of tries
    int cnt;

    // init random number generator
    srand(static_cast < unsigned int >(time(0)));

    //saw reference
        std::cout<<"I want to play a game!"<<std::endl;

    while(1){

        //pick a random number between 1 and 16, 
        int randomNumber = (rand() % 16) +1;

        std::cout<<"You have this word: "<<vowel_rep(a[randomNumber])<<std::endl;
        std::cout<<"Now try to guess it!"<<std::endl;

        //read the guess
        std::cin>>guess;

        //initialize the counter to 1
        cnt = 1;

        //read guesses and increment number of tries until the player
        //guesses the word
        while(guess.compare(a[randomNumber])){
            //star wars reference
            std::cout<<"This is not the word you are looking for.."<<std::endl;
            cnt++;
            std::cin>>guess;
        }

        //print the number of tries
        std::cout<<"Congratulations! It took you "<<cnt<<
        " tries. Do you want to play again?"<<std::endl;

        //if the player types "quit", the game ends
        //otherwise, it continues
        std::cin>>guess;
        if(!guess.compare("quit")){
            std::cout<<"Game over!!"<<std::endl;
            break;  
        }
        std::cout<<"Good choice. Let's play!"<<std::endl;
    }

    return 0;
}