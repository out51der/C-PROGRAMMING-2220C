#include <stdio.h>

void BackwardsAlphabet(char currLetter){
   if (currLetter == 'a') {
      printf("%c\n", currLetter);
   }
   else{
      printf("%c ", currLetter);
      BackwardsAlphabet(currLetter - 1);
   }
}

int main(void) {
   char startingLetter;

   scanf("%c", &startingLetter);

   /* Your solution goes here  */
   BackwardsAlphabet(startingLetter);

   return 0;
}
