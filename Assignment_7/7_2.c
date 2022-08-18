/*
CH-230-A
a7 p2.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list{
   char info;
   struct list *next;
   struct list *before;
};

struct list* push_front (struct list *my_list, char value) {
    struct list *newel;
    newel = (struct list *) malloc(sizeof (struct list));
    if (newel == NULL ) {
        printf ("Error allocating memory \n");
        return my_list;
    }

    newel->info = value ;
    newel->before = NULL ;

    if(my_list != NULL){
        my_list->before = newel ;
        newel->next = my_list ;
    }
    else
        newel -> next = NULL;
    return newel ;
}

void print_list_forwards ( struct list * my_list ) {
    struct list *p ;
    for ( p = my_list ; p != NULL; p = p->next ) {
        printf ("%c ", p->info ) ;
    }
    printf("\n");
}

void print_list_backwords ( struct list * my_list ) {
    struct list *p = my_list;
    while(p->next != NULL)
        p = p -> next;

    while(p){
        printf ("%c ", p->info ) ;
        p = p -> before;
    }
    printf("\n");
}

struct list * remove_elements (struct list * my_list, char value){
    struct list * p = my_list, *aux;
    //if ok remains 0 at the end of the function, the value doesn't exist
    //in the list
    int ok = 0;
    while(p){
        if( p -> info == value){
            ok = 1;//check that I found at least one character
            if(p -> before == NULL){//if it is the first element
                aux = p;
                p = p -> next;//move the pointer to the next element
                p -> before = NULL;//make it point back to NULL
                my_list = p;//modify my_list
                aux = NULL;
                free(aux);//free the memory for the removed element
            }
            else if ( p -> next == NULL){//if it is the last element
                aux = p;
                p = p -> before;//move the pointer one position back
                p -> next = NULL;//make it point next to NULL
                free(aux);//free the memory for the removed element
            }
            else{//if it is in the middle
                aux = p;
                p -> before -> next = p -> next;//connect previous to next
                p -> next -> before = p -> before;//connect next to previous
                free(aux);//free the memory for the removed element
            }
        }
        else
            p = p -> next;
    }
    //print_list_forwards(my_list);
    if(ok)
        return my_list;//return my_list if I found at least one character
    return 0;//return 0 otherwise
}


int main (){
    struct list* my_list = NULL;//declare my_list
    int x;
    char c;
    while(1){
        scanf("%d", &x);//read integer
        getchar();
        switch (x){
            case 1:
                scanf("%c", &c);//read character
                getchar();
                my_list = push_front(my_list, c);
                break;

            case 2:
                scanf("%c", &c);//read character
                getchar();
                if(remove_elements(my_list, c))//check if element found
                    my_list = remove_elements(my_list, c);
                else
                    printf("The element is not in the list!\n");
                break;
            
            case 3:
                print_list_forwards(my_list);
                break;

            case 4:
                print_list_backwords(my_list);
                break;
            case 5:
                exit(1);
                break;
        }
    }

    return 0;
}