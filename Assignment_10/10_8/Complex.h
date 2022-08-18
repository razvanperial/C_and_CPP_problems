/*
CH-230-A
a10 p8.[cpp]
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

    //adding,substracting and multiplying methods
    Complex add(Complex);
    Complex sub(Complex);
    Complex mult(Complex);

    // service method 
	void print();

    //destructor
    ~Complex();	
};