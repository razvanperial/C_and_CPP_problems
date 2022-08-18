/*
CH-230-A
a13 a7.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <stdexcept>
#include <cstring>

//own exception class
class OwnException : public std::exception{
    private:
        std::string msg;
    public:
        OwnException(){};
        OwnException(const std::string m) { msg = m; };
        //overwrite the what function from the exception class
        const char* what() const throw() { return "OwnException\n"; };
};

//function which throws different types of variables
//depending on the input
void exc(int x) {
    if( x == 1 )  
        throw 'a';
    else if( x == 2 )
        throw 12;
    else if ( x == 3 )
        throw true;
    else 
        throw OwnException("Default case exception");
}

int main() {
    
    //iterate through all cases of the exc function, 
    //and catch the errors thrown
    for(int i = 1; i <= 4; i++){
    
        //call the function and catch error depeneding on the throw value
        try{
            exc(i);
        }
        catch(char c){
            std::cerr<<"Caught in main: "<<c<<std::endl;        
        }
        catch(int n){
            std::cerr<<"Caught in main: "<<n<<std::endl;        
        }
        catch(bool b){
            std::cerr<<"Caught in main: "<<b<<std::endl;        
        }
        catch(OwnException& obj) {
            std::cerr<<"Caught in main: "<<obj.what()<<std::endl; 
        }
    }
    return 0;
}
