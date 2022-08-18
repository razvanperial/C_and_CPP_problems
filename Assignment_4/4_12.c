/*
CH-230-A
a4 p12.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceAll(char *str, char c, char e);

int main(){
    char str[80],c,e;
    //loop for reading the strings
    while(1){
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';
        //using if else to determine when to stop reading strings
        //use the strcmp functionto determine if the string enter is "stop"
        if(strcmp(str,"stop")){
            scanf("%c", &c);
            getchar();
            scanf("%c", &e);
            getchar();
            printf("Character to be replaced: %c\n", c);
            printf("Replacing character: %c\n", e);
            printf("String before replacement: %s\n", str);

            //calling the function
            replaceAll(str,c,e);

            printf("String after replacement: %s\n", str);   
        }
        else
            break;
    }

    return 0;
}

//defining the function
void replaceAll(char *str, char c, char e){
    //loop through all the characters from the string
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c)
            str[i] = e;
    }
}