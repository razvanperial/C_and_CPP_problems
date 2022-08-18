/*
CH-230-A
a7 p4.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//define the prototypes
void func1(char s[60]);
void func2(char s[60]);
void func3(char s[60]);
void func4(char s[60]);

//create an array of function pointers
void (* func_arr [4]) ( char s[60] ) = { func1 , func2 , func3, func4 };


int main(){
    char s[60];
    char c;

    //read the string
    fgets(s, sizeof(s), stdin);
    s[strlen(s)-1] = '\0';
    while(1){

        //read the character
        scanf("%c", &c);
        getchar();

        //call the right function using the ascii code of the character
        func_arr[(int)c-49](s);

    }

    return 0;
}

//define the functions
void func1(char s[60]){
    for(int i = 0; i < strlen(s); i++){
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

void func2(char s[60]){
    for(int i = 0; i < strlen(s); i++){
        printf("%c", tolower(s[i]));
    }
    printf("\n");
}

//use the ascii code to find out if the character is uppercase or lowercase
void func3(char s[60]){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 97 && s[i] <= 122)
            printf("%c", toupper(s[i]));
        else
            printf("%c", tolower(s[i]));
    }
    printf("\n");
}
void func4(char s[60]){
    exit(1);
}