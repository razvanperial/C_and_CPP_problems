/*
CH-230-A
a7 p7.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    //delare my stack and initialize it with NULL
    struct stack* my_stack = NULL;
    int x;
    //initialize the stack
    my_stack = init(my_stack);
    char c;
    while(1){
        scanf("%c", &c);
        getchar();
        switch (c){
            case 's':
                scanf("%d", &x);
                getchar();
                my_stack = push(my_stack, x);
                break;
    
            case 'p':
                my_stack = pop(my_stack);
                break;
            
            case 'e':
                my_stack = empty(my_stack);
                break;
    
            case 'q':
                printf("Quit\n");
                exit(1);
                break;
            
            default:
                break;
        }
    }
    return 0;
}
