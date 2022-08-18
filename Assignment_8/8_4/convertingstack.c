/*
CH-230-A
a8 p4.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    //delare my stack and initialize it with NULL
    struct stack* my_stack = NULL;

    //deckare the value
    unsigned int x;

    //initialize the stack
    my_stack = init(my_stack);
    
    //read the value
    printf("Enter value: ");
    scanf("%d", &x);

    printf("The binary representation of %d is: ", x);

    //divide x by 2 and store push remainder in the stack
    while(x){
        push(my_stack, x%2);
        x /= 2;
    }

    //empty the stack and print the decimal value of x
    empty(my_stack);

    //free memory
    free(my_stack);
    return 0;
}
