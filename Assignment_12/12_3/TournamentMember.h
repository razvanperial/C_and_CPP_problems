/*
CH-230-A
a12 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <string>
#include <cstring>

class TournamentMember {
    private:
        char fname[36];
        char lname[36];
        char dob[11];
        char role[15];
        int rank;
        static std::string location;
    public:
        //parameter constructor
        TournamentMember(char[], char[], char[], char[], int);
        TournamentMember();                         //empty constructor
        TournamentMember(const TournamentMember&);  //copy constructor
        ~TournamentMember();                        //destructor
        //first name setter
        void setFname(char c[]) {  
            strcpy(fname, c);
        }                     
        //last name setter
        void setLname(char c[]) {
            strcpy(lname, c);
        }
        //date of birth setter
        void setDob(char c[]) {
            strcpy(dob, c);
        }   
        //role setter
        void setRole(char c[]) {
            strcpy(role, c);
        }  
        //rank setter
        void setRank(int a) {
            rank = a;
        }  
        //location setter
        static void setLocation(std::string& l){      
            location = l;
        }
        //first name getter
        const char * getFname() const{
            return fname;
        }       
        //last name getter
        const char * getLname() const{
            return lname;
        }
        //date of birth getter
        const char * getDob() const{
            return dob;
        }
        //role getter
        const char * getRole() const{
            return role;
        }
        //rank getter
        int getRank() const{
            return rank;
        }

        //location getter
        std::string getLocation() const{
            return location;
        }
        //print method
        void print() const;                         
};

//a player is a tournament member which has a number, position, number of goals 
//and is left or right footed
class Player : public TournamentMember {
    private:
        int number;
        char position[36];
        int goals;
        char foot[14];
    public:
        Player(char[], char[], char[], char[], int, int, char[], 
        int, char[]);                 //parameter constructor
        Player();                     //empty constructor
        Player(const Player&);        //copy constructor
        ~Player();                    //destructor
        //number setter
        void setNumber(int n) {    
            number = n; 
        }
        //position setter
        void setPosition(char c[]) {    
            strcpy(position, c);
        }
        //dominant foot setter
        void setFoot(char c[]) {    
            strcpy(foot, c);
        }
        //getter for number of the player
        int getNumber() const {
            return number;
        } 
        //getter for position of the player
        const char * getPosition() const {
            return position;
        } 
        //getter for dominant foot of the player
        const char * getFoot() const {
            return foot;
        }   
        //getter for goals of the player
        int getGoals() const {
            return goals;
        }       
        //print method
        void printPlayer() const;
        //method for increasing goals           
        void incGoals();                    
};
