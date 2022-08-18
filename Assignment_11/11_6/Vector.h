/*
CH-230-A
a11 p6.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

class Vector {
    private:
        int size;
        double *ptr;

    public:
        Vector();                           //default constructor
        Vector(int s, double arr[]);        //parameter constructor
        Vector(const Vector&);              //copy constructor
        ~Vector();                          //destructor
        void setSize(const int s);          //setter for size
        void setValues(const double arr[]); //setter for the values of the vector
        int getSize() const;                //getter for the size of the vector
        double getValues() const;           //getter for the values of the vector
        void print() const;                 //print method
        double norm();                      //norm method
        Vector add(const Vector) const;     //add method
        Vector diff(const Vector) const;    //difference method
        double prod(const Vector) const;    //scalar product method

};