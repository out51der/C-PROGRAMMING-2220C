#include <stdio.h>

int main(void) {
   double celsiusValue;
   double fahrenheitValue;
   char userChar;

   celsiusValue = 0.0;
   userChar = 'y';
   
   while (userChar == 'y') {
      fahrenheitValue = (celsiusValue * 9.0 / 5.0) + 32.0;

      printf("%lf C is ", celsiusValue);
      printf("%lf F\n", fahrenheitValue); 

      printf("Type y to continue, any other to quit: ");
      scanf(" %c", &userChar);

      celsiusValue = celsiusValue + 5;
      printf("\n");
   }

   printf("Goodbye.\n");

   return 0;
}
