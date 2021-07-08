#include <stdio.h>

int main(void) {
   
   printf("Dog age in human years (dogyears.com)\n\n");
   printf("-------------------------\n");
   
   // set num char for each column, left aligned
   printf("%-10s | %-12s\n", "Dog age", "Human age");
   printf("-------------------------\n");
   
   // set num char for each column, first col left aligned
   printf("%-10s | %12s\n", "2 months", "14 months");
   printf("%-10s | %12s\n", "6 months", "5 years");
   printf("%-10s | %12s\n", "8 months", "9 years");
   printf("%-10s | %12s\n", "1 year", "15 years");
   printf("-------------------------\n");
   
   return 0;
}

/* OUTPUT:
Dog age in human years (dogyears.com)

-------------------------
Dog age    | Human age  
-------------------------
2 months   |    14 months
6 months   |      5 years
8 months   |      9 years
1 year     |     15 years
-------------------------

*/
