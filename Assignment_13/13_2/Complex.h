/*
CH-230-A
a13 p2.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/
 
class Complex
{
private:
    int real;
    int imaginary;
 
public:
    //constructors
    Complex();
    Complex(int real, int imaginary);
    Complex(const Complex&);
 
    // setter methods
    void setReal(int re);
    void setImag(int imag);
 
    // getter methods
    int getReal();
    int getImag();
 
    //conjugation method
    Complex conj();

    //overloading the << operator
    friend std::ostream& operator<<(std::ostream &os, const Complex& f);
 
    //overloading the >> operator
    friend std::istream& operator>>(std::istream& is, Complex& f);

    //overloading the + operator
    friend Complex operator+(Complex& f1, Complex& f2);
 
    //overloading the - operator
    friend Complex operator-(Complex& f1, Complex& f2);

    //overloading the * operator
    friend Complex operator*(Complex& f1, Complex& f2);
 
    //overloading the = operator
    Complex& operator=(const Complex&); 
 
    // service method 
    void print();
 
    //destructor
    ~Complex();    
};