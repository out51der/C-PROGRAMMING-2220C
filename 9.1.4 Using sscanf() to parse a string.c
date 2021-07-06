
#include <stdio.h>
#include <string.h>

int main(void) {
   char myString[100] = "Amy Smith 19";  // Input string
   char firstName[50];                   // First name
   char lastName[50];                    // Last name
   int userAge;                          // Age
   
   // Parse input, break up into first/last name and age
   sscanf(myString, "%49s %49s %d", firstName, lastName, &userAge);
   
   // Output parsed values
   printf("First name: %s\n", firstName);
   printf("Last name: %s\n", lastName);
   printf("Age: %d\n", userAge);
   
   return 0;
}
