#include <stdio.h>

int main(void) {
   const int ADDRESS_SIZE_LIMIT = 50;
   char streetAddress[ADDRESS_SIZE_LIMIT];

   printf("Enter street address: ");

   /* Your solution goes here  */
   
   fgets(streetAddress, ADDRESS_SIZE_LIMIT, stdin);

   printf("You entered: %s", streetAddress);

   return 0;
}
