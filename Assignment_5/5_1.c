/*
CH-230-A
a5 p1.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

//declaring the prototype for the function
void print(int n, char c);

int main(){
    //declaring the variables
    int n;
    char c;

    //reading the variables
    scanf("%d", &n);
    getchar();
    scanf("%c", &c);

    //calling the function
    print(n,c);

    return 0;
}

//writing the function
/*print the result by using 2 for loops, one that goes
in ascending order, and one that goes in descending order
dependent on the first one*/
void print(int n, char c){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            printf("%c", c);
        printf("\n");//newline to separate the rows
    }
}