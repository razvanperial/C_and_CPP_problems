/*
CH-230-A
a4 p5.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

//writing the prototype for the function
int count_consonants(char str[]);

int main(){
    char str[105];

    /*loop for reading the strings and exit the loop 
    when the string is just a newline character*/
    while(1){
        fgets(str, sizeof(str), stdin);
        if(str[0] != '\n'){
            str[strlen(str)-1] = '\0';
            printf("Number of consonants=%d\n", count_consonants(str));
        }
        else break;
        
    }
    return 0;
}

//defining the function
/*go through every character in the string  using a pointer and the address 
it is pointing to*/
/*use the strchr function to determine if the character is a consonant or not. 
If it is, increase the answer I'm looking for*/
int count_consonants(char str[]){
    char *p = str;
    int ans = 0;
    while(*p != '\0'){
        if(strchr("QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm", *p)){
            ans++;
        }
        p++;
    }
    return ans;
}