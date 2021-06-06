#include <stdio.h>
#include <string.h>

int main(void) {
   char nameArr[10];       // User specified name
   char greetingArr[17];   // Output greeting and name
   
   // Prompt user to enter a name
   printf("Enter name: ");
   fgets(nameArr, 10, stdin);
   
   // Eliminate end-of-line char
   if (nameArr[strlen(nameArr) - 1] == '\n') {
      nameArr[strlen(nameArr)-1] = '\0';
   }

   
   // Modify string, hello + user specified name
   strcpy(greetingArr, "Hello ");
   strcat(greetingArr, nameArr);
   strcat(greetingArr, ".");
   
   // Output greeting and name
   printf("%s\n", greetingArr);
   
   return 0;
}
