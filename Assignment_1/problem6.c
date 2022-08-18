#include <stdio.h>
 
int main(){
   char s = 'F';
   int t = (int)s;
   t += 3;
   s = (char)t;
   printf("%c\n%d\n", s, t);
   return 0;
}
