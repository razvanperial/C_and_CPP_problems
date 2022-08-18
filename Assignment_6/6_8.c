/*
CH-230-A
a6 p8.[c]
Razvan Perial
rperial@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
//declare the list
struct list{
   int info;
   struct list *next;
};
 
//add an element at the beginning of a list
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

//add an element at the end of a string
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
 
//print the list
void print_list ( struct list * my_list ) {
    struct list *p ;
    for ( p = my_list ; p ; p = p->next ) {
        printf ("%d ", p->info ) ;
    }
    printf("\n");
}

//free the linked list
void dispose_list ( struct list * my_list ) {
    struct list * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next;
        free ( my_list );
        my_list = nextelem;
    }
}

//elliminate character from the front of the list
struct list * re_front(struct list * my_list){
    struct list * aux;
    //check is the list if empty, and return the list if so
    if(my_list == NULL)
        return my_list;
    aux = my_list -> next;
    free(my_list);
    my_list = aux;
    return my_list ;
}
 
int main(){
    struct list* my_list = NULL;
    char c;
    int x;

    while(c != 'q'){//loop for reading the characters
        scanf("%c", &c);//read the character
        switch(c){
            case 'a':  
                scanf("%d",&x);
                my_list = push_back(my_list, x);
                break;

            case 'b':
                scanf("%d",&x);
                my_list = push_front(my_list, x);
                break;

            case 'p':
                print_list(my_list);
                break;
            
            case 'r':
                my_list = re_front(my_list);
                break;

            case 'q':
                dispose_list(my_list);
                break;

       }
   }
   return 0;
}