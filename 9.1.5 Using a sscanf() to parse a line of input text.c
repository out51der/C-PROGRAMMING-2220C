#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
   const int USER_TEXT_LIMIT = 1000;    // Limit input size
   char userText[USER_TEXT_LIMIT];      // Holds input
   char firstName[50];                  // First name
   char lastName[50];                   // Last name
   int userAge;                         // Age
   int valuesRead;                      // Holds number of inputs read
   bool inputDone;                      // Flag to indicate next iteration
   
   inputDone = false;

   // Prompt user for input
   printf("Enter \"firstname lastname age\" on each line\n");
   printf("(\"Exit\" as firstname exits).\n\n");
   
   // Grab data as long as "Exit" is not entered
   while (!inputDone) {
      
      // Grab entire line, store in userText
      fgets(userText, USER_TEXT_LIMIT, stdin);
      
      // Parse the line and check for correct number of entries.
      valuesRead = sscanf(userText, "%49s %49s %d", firstName, lastName, &userAge);
      if (valuesRead >= 1 && strcmp(firstName, "Exit") == 0) {
         printf("Exiting.\n");
         inputDone = true;
      }
      else if (valuesRead == 3) {
         printf("   First name: %s\n", firstName);
         printf("   Last  name: %s\n", lastName);
         printf("   Age: %d\n", userAge);
         printf("\n");
      }
      else {
         printf("Invalid entry. Please try again.\n\n");
      }
   }
   
   return 0;
}
