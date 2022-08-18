/*
CH-230-A
a13 p4.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
        int x;
    public:
        void setX(int i) {x = i;}
        void print() { cout << x; }
};
 
class B: public A
{
    public:
        B()  { setX(10); }
};
 
class C: public A  
{
    public:
        C()  { setX(20); }
};

class D: public B, public C {
};
 
int main()
{
    D d;
    d.C::print();
    /*the ambiguity occurs on line 30, because the method print() is inherited
    by both classes B and C, and the call in object d is ambiguos because the
    compiler does not know which print function to call, since they both have 
    the same name.
    */

   /*I fixed the error by adding C:: before the call of the funciton. This would
    specify exactly what print function to call (from which parent class), in this
    case from C(but it would have worked for b as well by adding B:: before the 
    print call). Also, we can observe that the value printed on the screen is 20, 
    which is the value set by the default constructor of class C. If I were to 
    change C:: with B:: , the value printed would have been 10, since the def. 
    constructor of class B sets the vaue of X to 10.  */
    return 0;
}