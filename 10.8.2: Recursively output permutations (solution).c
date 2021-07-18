#include <stdio.h>
#include <string.h>

static int permutationCount;                        // For counting permutations

void RemoveFromIndex(char* origString, int remLoc); 
void InsertAtIndex(char* origString, char* addChar, int addLoc);   
                  
void PermuteString(char* remainLetters,     // Remaining letters
                   char* permutedLetters) { // Permuted letters
   char tmpString[2]; 
   int i;              
   
   tmpString[1] = '\0';
   if (strlen(remainLetters) == 0) {            // Base case: All letters used
      ++permutationCount;                      // Counting permutations
      printf("%d) %s\n", permutationCount, permutedLetters);
   }
   else {                                      // Recursive case: move a letter from
                                               // remaining to permuted letters
      for (i = (strlen(remainLetters) - 1); i >= 0; --i) {
         // Move letter to permuted letters
         tmpString[0] = remainLetters[i];
         strcat(permutedLetters, tmpString);
         RemoveFromIndex(remainLetters, i);
         
         PermuteString(remainLetters, permutedLetters);
         
         // Put letter back in remaining letters
         permutedLetters[strlen(permutedLetters) - 1] = '\0';
         InsertAtIndex(remainLetters, tmpString, i);
      }
   }
}

int main(void) {
   char wordToPermute[50];   // User defined word to permute. 
   char finishPermute[50];   // Temp string already permuted. 
     
   printf("Enter a string to permute (<Enter> to exit): \n");
   scanf("%s", wordToPermute);
   while (wordToPermute[0] != ' ') {
      permutationCount = 0;
      PermuteString(wordToPermute, finishPermute);      
      printf("Enter a string to permute (<Enter> to exit): \n");
      wordToPermute[0] = ' ';
      scanf("%s", wordToPermute);
   }
   
   return 0;
}

// Remove letter at location remLoc from string origString
void RemoveFromIndex(char* origString, int remLoc) {
   char tmpString[50];                     // Temp string to extract char. 
   
   strcpy(tmpString, "");                  // Init string
   strncat(tmpString, origString, remLoc); // Copy before location remLoc
   strncat(tmpString, origString + remLoc + 1,
           strlen(origString) - remLoc);   // Copy after location remLoc
   strcpy(origString, tmpString);          // Copy back to original string
}

// Add letter addChar to location addLoc of string origString
void InsertAtIndex(char* origString, char* addChar, int addLoc) {
   char tmpString[50];                     // Temp string to add char. 
   
   strcpy(tmpString,"");                   // Init string
   strncat(tmpString, origString, addLoc); // Copy before location addLoc
   strncat(tmpString, addChar, 1);         // Copy letter addChar to location addLoc
   strncat(tmpString, origString + addLoc,
           strlen(origString) - addLoc);   // Copy after location addLoc
   strcpy(origString, tmpString);
}
