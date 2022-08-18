/*
CH-230-A
a3 p2.[c]
Razvan Perial
rperial@jacobs-university.de
*/
 
#include <stdio.h>

int main(){
    char c;
    int n;
    scanf("%c", &c);//reading the character
    scanf("%d", &n);//reading the integer
    for(int i=0 ; i <= n; i++){
    /*using the ascii code of c, I iterate 
    through every letter I need to, using the variable i*/
        if(i < n)
        /*I use the if function to know wether or
        not I should put a comma after a letter*/
            printf("%c,", c-i);
        else
            printf("%c\n", c-i);
    }
}