#include <stdio.h>

void SplitIntoTensOnes(int* tensDigit, int* onesDigit, int DecVal){
   *tensDigit = (DecVal / 10) % 10;
   *onesDigit = DecVal % 10;
}

int main(void) {
   int tensPlace;
   int onesPlace;
   int userInt;

   scanf("%d", &userInt);

   SplitIntoTensOnes(&tensPlace, &onesPlace, userInt);

   printf("tensPlace = %d, onesPlace = %d\n", tensPlace, onesPlace);

   return 0;
}
