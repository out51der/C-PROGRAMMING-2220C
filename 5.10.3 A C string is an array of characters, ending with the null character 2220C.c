#include <stdio.h>

int main(void) {
   char nameArr[9];

   nameArr[0] = 'A';
   nameArr[1] = 'l';
   nameArr[2] = 'a';
   nameArr[3] = 'n';
   nameArr[4] = '\0'; // Null character

   printf("%s\n", nameArr);

   nameArr[4] = '!';        // Oops, overwrote null char
   printf("%s\n", nameArr); // *Might* still work

   return 0;
}
