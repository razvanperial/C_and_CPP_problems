/*
CH-230-A
a2 p9.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    getchar();
    if((c>=65 && c<=90) || (c>=97 && c<=122))
        printf("%c is a letter\n", c);
    else if (c>=48 && c<=57)
        printf("%c is a digit\n", c);
    else
        printf("%c is some other symbol\n", c);

    return 0;
}
