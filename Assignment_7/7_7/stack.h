/*
CH-230-A
a7 p7.[c]
Razvan Perial
rperial@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
//declare the struct
struct stack {
   unsigned int count;
   int a[12];
};

//function declarations
struct stack* init(struct stack *my_stack);
struct stack* push(struct stack *my_stack, int value);
struct stack* pop(struct stack *my_stack);
struct stack* empty(struct stack *my_stack);