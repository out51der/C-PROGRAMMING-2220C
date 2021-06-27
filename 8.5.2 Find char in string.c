#include <stdio.h>
#include <string.h>

int main(void) {
   char personName[100];
   char searchChar;
   char* searchResult = NULL;

   fgets(personName, 100, stdin);
   scanf("%c", &searchChar);

   /* Your solution goes here  */
   searchResult = strchr(personName, searchChar);

   if (searchResult != NULL) {
      printf("Character found.\n");
   }
   else {
      printf("Character not found.\n");
   }

   return 0;
}
