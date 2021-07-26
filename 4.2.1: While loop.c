while (expression) { // Loop expression
    // Loop body: Executes if expression evaluated to true 
    // After body, execution jumps back to the "while"
}
// Statements that execute after the expression evaluates to false


#include <stdio.h>

int main(void) {
  int currPower;
  char userChar;
 
  currPower = 2;
  userChar = 'y';
 
  while (userChar == 'y') {
     printf("%d\n", currPower);
     currPower = currPower * 2;
     scanf("%c", &userChar);
  }
 
  printf("Done\n");
 
  return 0;
}
