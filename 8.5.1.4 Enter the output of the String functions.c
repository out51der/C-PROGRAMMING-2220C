
#include <stdio.h>
#include <string.h>

int main(void) {
   char userString[50];
   char* stringPointer = NULL;

   strcpy(userString, "take tall");

   stringPointer = strchr(userString, 't');
   while (stringPointer != NULL) {
      *stringPointer = 'f';
      stringPointer = strchr(userString, 't');
   }

   printf("%s\n", userString);

   return 0;
}
