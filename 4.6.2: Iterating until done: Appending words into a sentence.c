#include <stdio.h>
#include <string.h>

int main(void) {
   char sentenceText[81];
   char currWord[81];
   int numChars;

   printf("Enter words. End with DONE. Max 80 chars.\n");

   strcpy(sentenceText, ""); // Initially empty
   numChars = 0;             // Can't exceed 80

   scanf("%s", currWord);    // Get first word

   while (strcmp(currWord, "DONE") != 0) {
      // Must be <= 79 (plus space is 80) to fit in string
      if ( (strlen(sentenceText) + strlen(currWord)) > 79) {
         printf("Max sentence length reached.\n");
         strcpy(currWord, "DONE");        // Force done
      }
      else {
         strcat(sentenceText, " ");       // Append a space
         strcat(sentenceText, currWord);  // Append the word
         scanf("%s", currWord);           // Get next word
      }
   }

   printf("Sentence: %s\n", sentenceText);

   return 0;
}
