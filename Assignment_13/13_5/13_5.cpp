/*
CH-230-A
a13 p5.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
  //solution 1
  //A(){ x = 10; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
  //solution 2
  public:
    D():A(10), B() {}
};
 
int main()
{
    D d;
    d.print();
    /*
    We have the following two errors:
    - error: use of deleted function ‘D::D()’
    - error: no matching function for call to ‘A::A()’
    These errors occur because the class A has no default constructor,
    and when the object d of class D will be declared, the program will
    go up on the "inheritance tree" and try to call the default constructor
    of class A. Since it is inexistent, it will throw these errors.
    One solution to this would be to just add a default constrctor for
    class A. 
    The other would be to add a default constructor for class D in which we 
    call the parametric constructor of class A. 
    */
    return 0;
}