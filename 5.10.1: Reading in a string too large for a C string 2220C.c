#include <stdio.h>

int main(void) {
   char userStr[10]; // Input string
   int i;
   
   // Prompt user for string input
   printf("Enter string (<10 chars): ");
   scanf("%s", userStr);
   
   // Print 1 char at a time
   printf("\n"); 
   for (i=0; userStr[i] != '\0'; ++i) {
      printf("%c\n", userStr[i]); 
   }
   
   return 0;
}
