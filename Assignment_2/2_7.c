/*
CH-230-A
a2 p7.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int i = 8;
    while (i >= 4){
        /*I added two braces at the beginning 
        and at the end of the while function in
        order for the "i--" command to be executed.
        The issue was that the program only 
        executed the first command because there 
        were no braces.*/
        printf("i is %d\n", i);
        i--;
    }
    printf("That’s it.\n");
    return 0;
}