/*
CH-230-A
a8 p4.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

//initialize stack function
struct stack* init(struct stack *my_stack){
    //assign memory for the stack variable
    my_stack = (struct stack *) malloc(sizeof (struct stack));
    my_stack->count = 0;
    my_stack->a[0] = 0;
    return my_stack;
}

//push an element in the stack
struct stack* push(struct stack *my_stack, int value){
   if(my_stack->count == 12){//if the stack is full
       printf("Pushing Stack Overflow\n");
       return my_stack;
   }  
   //continues if it isn't full  
   my_stack->count++;//increase the level I am on
   my_stack->a[my_stack->count] = value;//assign the value
   return my_stack;
}

//empty the stack and print the elements of it
struct stack* empty(struct stack *my_stack){
    while(my_stack->count > 0){//going to the beginning of the stack
        printf("%d", my_stack->a[my_stack->count]);//print the elements
        (my_stack->count)--;//decrease the level I am on
    }
    printf(".\n");
    return my_stack;
}