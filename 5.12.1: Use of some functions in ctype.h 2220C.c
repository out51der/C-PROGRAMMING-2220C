#include <stdio.h>
#include <ctype.h>

int main(void) {
   const int MAX_LEN = 30; // Max string length
   char userStr[MAX_LEN]; // User defined string
   int i;
   
   // Prompt user to enter string
   printf("Enter string (<%d chars): ", MAX_LEN);
   scanf("%s", userStr);
   
   printf("Original: %s\n", userStr);
   
   printf("isalpha:  ");
   for (i = 0; userStr[i] != '\0'; ++i) {
      printf("%d", isalpha(userStr[i]));
   }
   printf("\n");
   
   printf("isdigit:  ");
   for (i = 0; userStr[i] != '\0'; ++i) {
      printf("%d", isdigit(userStr[i]));
   }
   printf("\n");
   
   printf("isupper:  ");
   for (i = 0; userStr[i] != '\0'; ++i) {
      printf("%d", isupper(userStr[i]));
   }
   printf("\n");
   
   for (i = 0; userStr[i] != '\0'; ++i) {
      userStr[i] = toupper(userStr[i]);
   }
   printf("After toupper: %s\n", userStr);
   
   return 0;
}
