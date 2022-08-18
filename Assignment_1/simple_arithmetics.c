#include <stdio.h>
 
int main(){
   int x = 17, y = 4;
   int sum = x + y, product = x*y, difference = x-y;
   double division = ((double)x)/y;
   int remainder = x%y;
   printf("x=%d\n", x);
   printf("y=%d\n", y);	
   printf("sum=%d\n", sum);
   printf("product=%d\n", product);
   printf("difference=%d\n", difference);
   printf("division=%lf\n", division);
   printf("remainder of division=%d\n", remainder);
   return 0;
}
