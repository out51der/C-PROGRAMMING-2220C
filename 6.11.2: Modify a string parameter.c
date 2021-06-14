#include <stdio.h>
#include <string.h>

void MakeSentenceExcited(char* sentenceText) {

  int i;  // Loop index
   
   for (i = 0; i < strlen(sentenceText); i++) {
      if (sentenceText[i] == '.') {
         sentenceText[i] = '!';
      }
   }
}

int main(void) {
   const int TEST_STR_SIZE = 50;
   char testStr[TEST_STR_SIZE];

   fgets(testStr, TEST_STR_SIZE, stdin);
   MakeSentenceExcited(testStr);
   printf("%s", testStr);

   return 0;
}
