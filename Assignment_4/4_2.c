/*
CH-230-A
a4 p2.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int main(){
    char s[55];//declaring the string

    //reading the string
    fgets(s,sizeof(s),stdin);

    //eliminate the newline character from the string
    s[strlen(s)-1] = '\0';

    /*writing the for loop for printing the message on the screen,
    also using an if else statementto determine wether to put or not a 
    space before the character*/
    for(int i = 0; i < strlen(s); i++){
        if(i%2)//if i is odd, print a space before the char
            printf(" %c\n", s[i]);
        else//if i is even, don't print a space
            printf("%c\n", s[i]);
    }

    return 0;
}