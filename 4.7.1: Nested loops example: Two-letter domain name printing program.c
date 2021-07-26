
#include <stdio.h>

/* Output all two-letter .com Internet domain names */

int main(void) {
   char letter1;
   char letter2;
   
   printf("Two-letter domain names:\n");
   
   letter1 = 'a';
   while (letter1 <= 'z') {
      letter2 = 'a';
      while (letter2 <= 'z') {
         printf("%c%c.com\n", letter1, letter2);
         ++letter2;
      }
      ++letter1;
   }
   
   return 0;
}
