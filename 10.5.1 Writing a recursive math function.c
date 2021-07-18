#include <stdio.h>

int RaiseToPower(int baseVal, int exponentVal){
   int resultVal;

   if (exponentVal == 0) {
      resultVal = 1;
   }
   else {
      resultVal = baseVal * RaiseToPower(baseVal, exponentVal - 1)/* Your solution goes here  */;
   }

   return resultVal;
}

int main(void) {
   int userBase;
   int userExponent;

   scanf("%d", &userBase);
   scanf("%d", &userExponent);
   printf("%d^%d = %d\n", userBase, userExponent, RaiseToPower(userBase, userExponent));

   return 0;
}
