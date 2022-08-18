/*
CH-230-A
a3 p7.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
//naming the prototype of the function
void print_form(int n, int m, char c);

int main(){
    //declaring the variables
    int n,m;
    char c;

    //reading the values from the keyboard
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);


    //calling the function
    print_form(n,m,c);

    return 0;
}

//defining the function
void print_form(int n, int m, char c){
    //the number of lines will be equal to n
    for(int i = 0; i < n; i++){
        /*the number of columns will increase 
        by one depending on the value of i*/
        for(int j = 1; j <= i+m; j++)
            printf("%c",c);
        printf("\n");
    }

}