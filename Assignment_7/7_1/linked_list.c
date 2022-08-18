//define the functions

/*
CH-230-A
a7 p1.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>

struct list* push_front (struct list *my_list, int value) {
    struct list *newel;
    newel = (struct list *) malloc(sizeof (struct list));
    if (newel == NULL ) {
        printf ("Error allocating memory \n");
        return my_list;
    }
    newel->info = value ;
    newel->next = my_list ;
    return newel ;
}

struct list * push_back ( struct list * my_list , int value ) {
    struct list * cursor , * newel ;
    cursor = my_list ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel -> info = value ;
    newel -> next = NULL ;
    if ( my_list == NULL )
        return newel;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newel ;
    return my_list ;
}

void print_list ( struct list * my_list ) {
    struct list *p ;
    for ( p = my_list ; p ; p = p->next ) {
        printf ("%d ", p->info ) ;
    }
    printf("\n");
}

void dispose_list ( struct list * my_list ) {
    struct list * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next;
        free ( my_list );
        my_list = nextelem;
    }
}

struct list * re_front(struct list * my_list){
    struct list * aux;
    //check is the list if empty, and return the list if so
    if(my_list == NULL)
        return my_list;
    aux = my_list -> next;
    free(my_list);
    my_list = aux;
    return my_list;
}



