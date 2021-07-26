#include <stdio.h>

int main(void) {
   int numAsterisk;  // Number of asterisks to print
   int i;            // Loop counter
   
   numAsterisk = 0;

   while (numAsterisk >= 0) {
      printf("Enter an integer (negative to quit): ");
      scanf("%d", &numAsterisk);
      
      if (numAsterisk >= 0) {
         printf("Depicted graphically:\n");
         for (i = 1; i <= numAsterisk; ++i) {
            printf("*");
         }
         printf("\n\n");
      }
   }
   
   printf("Goodbye.\n");

   return 0;
}
