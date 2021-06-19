#include <stdio.h>

typedef struct WidthFtIn_struct {
   int numFeet;
   int numInches;
} WidthFtIn;

WidthFtIn SetHeight(int feetVal, int inchesVal){
 
     WidthFtIn tempVal;
     tempVal.numFeet = feetVal;
     tempVal.numInches = inchesVal;
     
     return tempVal;
   
}

int main(void) {
   WidthFtIn objectSize;
   int feetVal;
   int inchesVal;

   scanf("%d", &feetVal);
   scanf("%d", &inchesVal);

   objectSize = SetHeight(feetVal, inchesVal);

   printf("Size: %dft %din.\n", objectSize.numFeet, objectSize.numInches);

   return 0;
}
