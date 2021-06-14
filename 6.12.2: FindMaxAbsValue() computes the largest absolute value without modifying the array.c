#include <stdio.h>
#include <math.h>

float FindMaxAbsValue(const float inputVals[], int numVals) {
   int i;
   float maxAbsVal;
   float inputAbsVal;
   
   maxAbsVal = fabs(inputVals[0]);
   for (i = 0; i < numVals; ++i) {
      inputAbsVal = fabs(inputVals[i]);
      if (inputAbsVal > maxAbsVal) {
         maxAbsVal = inputAbsVal;
      }
   }
   
   return maxAbsVal;
}

int main(void) {
   const int NUM_VALUES = 5;
   // Array of changes in temperatures
   float tempChanges[5] = {10.0, 0.5, -5.1, -11.2, 3.0};
   float maxAbsChange;
   int i;
   
   // Print array before function call
   printf("tempChanges array before function call: ");
   for(i = 0; i < NUM_VALUES; ++i) {
      printf("%f ", tempChanges[i]);
   }
   printf("\n");
   
   // Find the largest temperature change, and print result.
   maxAbsChange = FindMaxAbsValue(tempChanges, NUM_VALUES);
   printf("Max absolute temperature change: %f\n", maxAbsChange);
   
   // Print array after function call
   printf("tempChanges array after function call:  ");
   for(i = 0; i < NUM_VALUES; ++i) {
      printf("%f ", tempChanges[i]);
   }
   printf("\n");
   
   return 0;
}
