#include <stdio.h>
#include <string.h>

int main(void) {
   char nameAndTitle[50];
   char subString[20];
   char* stringPointer = NULL;

   strcpy(nameAndTitle, "Mr. Andres Anderson");

   stringPointer = strstr(nameAndTitle, "Ms.");
   if (stringPointer != NULL) {
      printf("Hello ma'am\n");
   }
   else {
      printf("Hello Mr. Anderson\n");
   }

   return 0;
}
