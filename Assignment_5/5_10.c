/*
CH-230-A
a5 p10.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
//declaring the prototype
int f(int n);

int main(){
    int n;

    //reading the variable
    scanf("%d", &n);

    //calling the recursive function
    f(n);

    return 0;
}

//writing the function
int f(int n){
    printf("%d ", n);
    if(n == 1)//base case
        return 0;
    else{
        return f(n-1);//calling the function with the parameter lowered by 1 
    }
}