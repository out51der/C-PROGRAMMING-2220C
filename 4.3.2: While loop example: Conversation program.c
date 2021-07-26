#include <stdio.h>
#include <string.h>

/* Program that has a conversation with the user. 
   Uses a if-else statements and a random number (sort of) 
   to mix up the program's responses. */

int main(void) {
  const int TEXT_LIMIT = 1000;    // Size limit for user input
  char userText[TEXT_LIMIT];      // User input
  int rand0_3;                    // Random number 0 - 3

  printf("Tell me something about yourself.\n");
  printf("You can type \"Goodbye\" at anytime to quit.\n\n> ");
  
  fgets(userText, TEXT_LIMIT, stdin);    // Reads a full line of text
  userText[strlen(userText) - 1] = '\0'; // Replaces the newline character

  while (strcmp(userText, "Goodbye") != 0) {
    rand0_3 = strlen(userText) % 4;      // "Random" num. %4 ensures 0-3

    if (rand0_3 == 0) {
      printf("\nPlease explain further.\n\n> ");
    }
    else if (rand0_3 == 1) {
      printf("\nWhy do you say: \"%s\"?\n\n> ", userText);
    }
    else if (rand0_3 == 2) {
      printf("\nI don't think that's right.\n\n> ");
    }
    else if (rand0_3 == 3) {
      printf("\nWhat else can you share?\n\n> ");
    }
    else {
      printf("\nUh-oh, something went wrong. Try again.\n\n");
    }

    fgets(userText, TEXT_LIMIT, stdin);
    userText[strlen(userText)-1] = '\0';
  }
  
  printf("\nIt was nice talking with you. Goodbye.\n\n");

  return 0;
}
