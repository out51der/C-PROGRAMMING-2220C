
#include <stdio.h>
#include <string.h>

int main(void) {
   char nameAndTitle[50];
   char subString[20];
   char* stringPointer = NULL;

   strcpy(nameAndTitle, "Ms. Ann Hill");

   stringPointer = strchr(nameAndTitle, 'A');
   strcpy(subString, stringPointer);

   printf("%s\n", subString);

   return 0;
}
