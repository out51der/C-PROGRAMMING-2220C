#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
   char userStr[100];
   char* newStr = NULL;

   fgets(userStr, 100, stdin);

   /* Your solution goes here  */
   newStr = (char*)malloc((strlen(userStr)+1)*sizeof(char));

   strcpy(newStr, userStr);
   printf("%s\n", newStr);

   return 0;
}
