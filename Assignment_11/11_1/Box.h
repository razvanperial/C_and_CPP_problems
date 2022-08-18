/*
CH-230-A
a11 p1.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

class Box
{    
private:
    double width;
    double height;
    double depth;

public:
    //setters
    void setWidth(double wi);
    void setHeight(double he);
    void setDepth(double de);

    //getters
    double getWidth();
    double getHeight();
    double getDepth();

    //constructors
    Box();
    Box(double wi, double he, double de);
    Box(const Box&);

    //destructor
    ~Box();
};