
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
   char inputWord[21];
   int numLetters;
   int i;

   printf("Enter a word (<= 20 char): ");
   scanf("%s", inputWord);

   numLetters = 0;
   for (i = 0; i < strlen(inputWord); ++i) {
      if (isalpha(inputWord[i])) {
         numLetters += 1;
      }
   }

   printf("Number of letters: %d\n", numLetters);

   return 0;
}
