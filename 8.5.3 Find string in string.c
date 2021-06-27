#include <stdio.h>
#include <string.h>

int main(void) {
   char movieTitle[100];
   char* movieResult = NULL;

   fgets(movieTitle, 100, stdin);

   /* Your solution goes here  */
   
   movieResult = strstr(movieTitle, "The");

   printf("Movie title contains The? ");
   if (movieResult != NULL) {
      printf("Yes.\n");
   }
   else {
      printf("No.\n");
   }

   return 0;
}
