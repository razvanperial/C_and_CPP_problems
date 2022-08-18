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
    //check is the list if empty, and return the list if so
    if(my_list == NULL)
        return my_list;
    else if (my_list -> next == NULL)
        my_list = NULL;
    else
        my_list = my_list -> next;
    //free(my_list);
    return my_list ;
}
 
//insert new element at a given position
struct list * insert_el(struct list * my_list, int poz, int val){
    struct list * cursor , * newel;
    int i = 0;
    cursor = my_list ;
    //allocate memory for the new element
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel->info = val;
    //finding the element after which the new element should be inserted
    while(i < poz - 1){
        cursor = cursor -> next ;
        i++;
    }
    //making the pointer of the element we are on point to the new element
    //also make the element point to the previous next element(the one the
    //coursor was pointing to)
    newel->next = cursor->next;
    cursor->next = newel;
    
    return my_list;
}

//reverse the list
struct list * reverse_list(struct list * my_list) {
    struct list *cursor, * aux1 = cursor->next, * aux2 = cursor;
    /*I use the cursor to go through the elements of the list, and 
    with the help of the two aux variables switch the direction
    the pointers in the list are pointing to in order to reverse
    the list*/
    if(my_list->next == NULL)
        return my_list;
    else{
        cursor = my_list;//initialize the cursor to the beginning of the list
        aux2->next = NULL;//make the first element point to NULL
        while(aux1->next != NULL){//ends one element before the end of the list
            aux2 = aux1;//switch to the next
            aux1 = aux1->next;//switch to the next
            aux2->next = cursor;//point to the one before
            cursor = aux2;//switch to the aux2 position
        }
        aux1->next = aux2;
        my_list = aux1;
        return my_list;
    }
}

int main(){
    struct list* my_list = NULL;
    char c;
    int x, poz, val, n = 0;
    //n will represent the number of ellements in the list
    do{//loop for reading the characters
        scanf("%c", &c);
        switch(c){
            case 'a':  
                scanf("%d",&x);
                getchar();
                my_list = push_back(my_list, x);
                n++;//increase the number of elemenets in the list
                break;

            case 'b':
                scanf("%d",&x);
                getchar();
                my_list = push_front(my_list, x);
                n++;//increase the number of elemenets in the list
                break;

            case 'p':
                getchar();
                print_list(my_list);
                break;
            
            case 'r':
                getchar();
                my_list = re_front(my_list);
                n--;//decrease the number of elemenets in the list
                break;

            case 'i':
                scanf("%d%d", &poz, &val);
                getchar();
                if(poz > n || poz < 0)
                    printf("Invalid position!\n");
                else
                    my_list = insert_el(my_list, poz, val);
                break;

            case 'R':
                getchar();
                my_list = reverse_list(my_list);
                break;

            case 'q':
                getchar();
                dispose_list(my_list);
                break;

       }
   }while(c != 'q');
   return 0;
}