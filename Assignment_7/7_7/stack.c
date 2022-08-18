/*
CH-230-A
a7 p7.[c]
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
   printf("Pushing %d\n", value);
   return my_stack;
}

//pop an element from the stack
struct stack* pop(struct stack *my_stack){
   if(my_stack->count == 0){//check if the stack is empty
       printf("Popping Stack Underflow\n");
       return my_stack;
   }
   //continues if it isn't empty
   printf("Popping %d\n", my_stack->a[my_stack->count]);
   (my_stack->count)--;//decrease the level I am on
   return my_stack;
}

//empty a stack
struct stack* empty(struct stack *my_stack){
    printf("Emptying Stack ");
    while(my_stack->count > 0){//going to the biginning of the stack
        printf("%d ", my_stack->a[my_stack->count]);//print the elements
        (my_stack->count)--;//decrease the level I am on
    }
    printf("\n");
    return my_stack;
}