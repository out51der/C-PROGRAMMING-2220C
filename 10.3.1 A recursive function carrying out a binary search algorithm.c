#include <stdio.h>

void GuessNumber(int lowVal, int highVal) {
   int midVal;            // Midpoint of low and high value
   char userAnswer;       // User response
   
   midVal = (highVal + lowVal) / 2;
   
   // Prompt user for input
   printf("Is it %d? (l/h/y): ",midVal);
   scanf(" %c", &userAnswer);
   
   if( (userAnswer != 'l') && (userAnswer != 'h') ) { // Base case: Found number
      printf("Thank you!\n");                         
   }
   else {                                             // Recursive case: split into lower OR upper half
      if (userAnswer == 'l') {                        // Guess in lower half
         GuessNumber(lowVal, midVal);                 // Recursive call
      }
      else {                                          // Guess in upper half
         GuessNumber(midVal + 1, highVal);            // Recursive call
      }
   }
}

int main(void) {
   // Print game objective, user input commands
   printf("Choose a number from 0 to 100.\n");
   printf("Answer with:\n");
   printf("   l (your num is lower)\n");
   printf("   h (your num is higher)\n");
   printf("   any other key (guess is right).\n");

   // Call recursive function to guess number
   GuessNumber(0, 100);
   
   return 0;
}

/* OUTPUT
Choose a number from 0 to 100.
Answer with:
   l (your num is lower)
   h (your num is higher)
   any other key (guess is right).
Is it 50? (l/h/y): l
Is it 25? (l/h/y): h
Is it 38? (l/h/y): l
Is it 32? (l/h/y): y
Thank you!
*/
