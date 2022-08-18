/*
CH-230-A
a5 p7.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s1[105], s2[105], *s;
    
    //reading the first string and removing the newline character
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = '\0';

    //reading the second string and removing the newline character
    fgets(s2, sizeof(s2), stdin);
    s2[strlen(s2) - 1] = '\0';

    //allocate memory for the concatenated string
    s = (char*) malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
    if(s == NULL)
        exit(1);

    //concatenate the strings 
    strcpy(s,s1);
    strcat(s,s2);
    printf("Result of concatenation: %s\n", s);

    //deallocating the memory
    free(s);
    return 0;
}