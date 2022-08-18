/*
CH-230-A
a4 p11.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_insensitive(char *str, char c);

int main(){
    char *str, *c_str;

    //initially allocate memory for the string of maximum 50 characters
    str = (char*) malloc(sizeof(char) * 50);
    if(str == NULL)
        exit(1);

    //read the string and delete the newline character from the end
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';

    //allocating memory for the exact dimension of the string
    c_str = (char*) malloc(sizeof(char) * strlen(str));
    if(c_str == NULL)
        exit(1);

    //copying the first string into the second one
    strcpy(c_str, str);

    //deallocating the memory for the first string
    free(str);

    //calling the function and printing the result
    printf("The character 'b' occurs %d times.\n",count_insensitive(c_str,'b'));
    printf("The character 'H' occurs %d times.\n",count_insensitive(c_str,'H'));
    printf("The character '8' occurs %d times.\n",count_insensitive(c_str,'8'));
    printf("The character 'u' occurs %d times.\n",count_insensitive(c_str,'u'));
    printf("The character '$' occurs %d times.\n",count_insensitive(c_str,'$'));

    //deallocate the memory used for the second string as well
    free(c_str);
    return 0;
}

//defining the function 
/*search for the character and use the toupper and tolower
functions to compare each character to the one we are searching for*/
int count_insensitive(char *str, char c){
    int ans = 0;
    for(int i = 0; i < strlen(str); i++)
        if(str[i] == tolower(c) || str[i] == toupper(c))
            ans++;

    return ans;
}