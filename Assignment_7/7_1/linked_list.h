/*
CH-230-A
a7 p1.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

//declare the struct
struct list{
   int info;
   struct list *next;
};

//write the prorotypes for the functions
struct list* push_front (struct list *my_list, int value);
struct list * push_back ( struct list * my_list , int value );
void print_list ( struct list * my_list );
void dispose_list ( struct list * my_list );
struct list * re_front(struct list * my_list);


