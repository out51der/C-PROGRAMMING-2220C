#include <stdio.h>

int main(void) {
   const int NUM_GUESSES = 3;
   int userGuesses[NUM_GUESSES];
   int i;

    for (i = 0; i < NUM_GUESSES; ++i) {
      scanf("%d", &(userGuesses[i]));
    }

   for (i = 0; i < NUM_GUESSES; ++i) {
      printf("%d ", userGuesses[i]);
   }

   return 0;
}
