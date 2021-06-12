#include <stdio.h>

void PrintFeetInchShort(int numFeet, int numInches) {
   printf("%d\' %d\"\n", numFeet, numInches);
}

int main(void) {
   int userFeet;
   int userInches;

   scanf("%d", &userFeet);
   scanf("%d", &userInches);

   PrintFeetInchShort(userFeet, userInches);   // Will be run with (5, 8), then (4, 11)

   return 0;
}
