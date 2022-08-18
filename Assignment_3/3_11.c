/*
CH-230-A
a3 p11.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){
    //declaring the strings and character
    char one[100], two[100], copy[105], aux[100], c;
    int lone,ltwo;//variables for storing the lengths of the strings
    int f;

    //reading the strings and eliminating the newline character from them
    fgets(one, 100, stdin);
    one[strlen(one)-1] = '\0';
    fgets(two, 100, stdin);
    two[strlen(two)-1] = '\0';

    //reading the character c
    scanf("%c", &c);

    //calculating and printing the lengths of the strings
    lone = strlen(one);
    ltwo = strlen(two);
    printf("length1=%d\n", lone);
    printf("length2=%d\n", ltwo);

    //printing the concatenation of the 2 strings using and additional string
    strcpy(aux, one);
    strcat(aux,two);
    printf("concatenation=%s\n", aux);
    
    //copy the second string into a copy and print it
    strcpy(copy, two);
    printf("copy=%s\n", copy);
    
    //compare the lengths of the strings using the strcmp function
    f = strcmp(two,one);
    if(f > 0)
        printf("one is smaller than two\n");
    else if (f < 0)
        printf("one is larger than two\n");
    else
        printf("one is equal to two\n");
    
    //search for character c in two using strchr function
    if(strchr(two,c) != 0)
        printf("position=%ld\n", strchr(two,c)-two);
    else
        printf("The character is not in the string\n");
    return 0;
}