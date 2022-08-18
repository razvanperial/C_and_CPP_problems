/*
CH-230-A
a5 p3.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//declaring the prorotype for the function
int count_lower(char* str);

int main(){
    char s[50];//declare the string

    //loop for reading the strings
    while(1){
        fgets(s, sizeof(s), stdin);
        //using if else to determine when to stop reading strings
        if(s[0] == '\n')
            break;
        else{
            s[strlen(s) - 1] = '\0';//eliminate the newline character
            printf("Number of lowercase characters: %d\n", count_lower(s));
        }
    }

    return 0;
}

//writing the function
//use the ascii code to find the lowercase characters
//move through the string using a pointer p
int count_lower(char* str){
    int ans = 0;
    char *p = str;
    while(*p != '\0'){
        if(*p <= 122 && *p >=97)//ascii code of a lowercase character
            ans++;
        p++;
    }
    return ans;
}