/*
CH-230-A
a3 p4.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
int position(char str[], char c){
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){}
        /* do nothing */
        /*I added braces at the end of the for statement, because
        otherwise it would have returned 0 at the beginning 
        of the for loop everytime*/
    return idx;
}
int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
    }
    return 0;
    /*I also added the return 0 statement at the end 
    of the main function*/
}