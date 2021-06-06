#include <stdio.h>
#include <string.h>

int main(void) {
   char userName[15] = "Alan Turing";
   int i;
   
   printf("Before: %s\n", userName);
   
   for (i = 0; i < strlen(userName); ++i) {
      if (userName[i] == ' ') {
         userName[i] = '_';
      }
   }
   printf("After:  %s\n", userName);
   
   return 0;
}
