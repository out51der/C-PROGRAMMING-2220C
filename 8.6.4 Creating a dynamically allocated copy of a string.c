
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
   char nameArr[50];      // User specified name
   char* nameCopy = NULL; // Output greeting and name
   
   // Prompt user to enter a name
   printf("Enter name: ");
   fgets(nameArr, 50, stdin);
   
   // Create dynamically allocated copy of name
   // +1 is for the null character
   nameCopy = (char*)malloc((strlen(nameArr) + 1) * sizeof(char));
   strcpy(nameCopy, nameArr);


   // Output greeting and name
   printf("Hello %s", nameCopy);
   
   // Deallocate memory
   free(nameCopy);
   
   return 0;
}
