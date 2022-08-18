/*
CH-230-A
a12 p2.[cpp]
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
