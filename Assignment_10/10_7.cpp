#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&); 
	void update(char, char);
	void print();
};

NaiveString::NaiveString(const char* t) {
    cout<<"Other constrictor was called"<<endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/


NaiveString::NaiveString(const NaiveString& src) {
    cout<<"Copy constructor was called"<<endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
    cout<<"update method was called"<<endl;
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() was called" << endl;
	s.update('B', 'C');
	s.print();
}

//define the funcbyref function
void funcByRef(NaiveString& s){
    cout << "funcByRef() was called" << endl;
	s.update('B', 'C');
	s.print();
}

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
    NaiveString b = a;//define object b using the copy constructor

    //print the objects on the screen
    cout<<"a: ";
	a.print();

    cout<<"b: ";
    b.print();

    //calling the methods, one for each object
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);

    cout << "About to call funcbyref()" << endl;
    funcByRef(b);

    //print the objects after calling the different functions
    cout<<"a: ";
	a.print();
    cout<<"b: ";
	b.print();
}