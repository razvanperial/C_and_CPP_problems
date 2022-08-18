/*
CH-230-A
a5 p10.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

//declaring the prototype
int f(int n, int i);

int main(){
    int n;
    scanf("%d", &n);//reading the variable

    /*calling the function in an if statement to
    check if the number is prime or not*/
    if(f(n,2))
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;
}

//writing the function
int f(int n, int i){
    if(n == 1 || (n%i == 0 && n != 2))
        return 0;
    else if(i >= n/2)
        return 1;
    return f(n,i+1);
}