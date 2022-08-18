/*
CH-230-A
a7 p1.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

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