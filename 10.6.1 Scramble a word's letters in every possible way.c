#include <stdio.h>
#include <string.h>

const int MAX_ARR_SIZE = 50;                        // Word size limit

void RemoveFromIndex(char* origString, int remLoc); // Remove letter at location i from string c
void InsertAtIndex(char* origString, char* addChar,
                   int addLoc);                     // Add letter n to location i of string c

/* Output every possible combination of a word.
   Each recursive call moves a letter from
   remainLetters" to scramLetters".
*/
void ScrambleLetters(char* remainLetters,  // Remaining letters
                     char* scramLetters) { // Scrambled letters

   char tmpString[2];      // Using c string for access to strcat
   int i;                  // Loop index

   tmpString[1] = '\0';
   if(strlen(remainLetters) == 0) {            // Base case: All letters used
      printf("%s\n",scramLetters);
   }
   else {                                      // Recursive case: move a letter from
                                               // remaining to scrambled letters
      for (i = 0; i < strlen(remainLetters); ++i) {
         
         // Move letter to scrambled letters
         tmpString[0] = remainLetters[i];
         strcat(scramLetters, tmpString);
         RemoveFromIndex(remainLetters, i);
         
         ScrambleLetters(remainLetters, scramLetters);
         
         // Put letter back in remaining letters
         scramLetters[strlen(scramLetters)-1]='\0';
         InsertAtIndex(remainLetters, tmpString, i);
      }
   }
}

int main(void) {
   char wordScramble[50];        // User defined word to scramble. 50 is MAX_ARR_SIZE
   char finishScramble[50];      // Temp string already scrambled. 50 is MAX_ARR_SIZE
   
   // Init strings
   strcpy(wordScramble, ""); 
   strcpy(finishScramble, "");
   
   // Prompt user for input
   printf("Enter a word to be scrambled: ");
   scanf("%s", wordScramble);
   
   // Call recursive function
   ScrambleLetters(wordScramble, finishScramble);
   
   return 0;
}

// Remove letter at location remLoc from string origString
void RemoveFromIndex(char* origString, int remLoc) {
   char tmpString[50];           // Temp string to extract char. 50 is MAX_ARR_SIZE
   
   strcpy(tmpString, "");                  // Init string
   strncat(tmpString, origString, remLoc); // Copy before location remLoc
   strncat(tmpString, origString + remLoc + 1,
           strlen(origString) - remLoc);   // Copy after location remLoc
   strcpy(origString, tmpString);          // Copy back to orignal string
}

// Add letter addChar to location addLoc of string origString
void InsertAtIndex(char* origString, char* addChar, int addLoc) {
   char tmpString[50];           // Temp string to add char. 50 is MAX_ARR_SIZE
   
   strcpy(tmpString,"");                   // Init string
   strncat(tmpString, origString, addLoc); // Copy before location addLoc
   strncat(tmpString, addChar, 1);         // Copy letter addChar to location addLoc
   strncat(tmpString, origString + addLoc,
           strlen(origString) - addLoc);   // Copy after location addLoc
   strcpy(origString, tmpString);
}
