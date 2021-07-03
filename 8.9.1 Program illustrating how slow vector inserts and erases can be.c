#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main(void) {
   vector tempValues;  // Dummy vector to demo vector ops
   int vectorSize;     // User defined vector size
   int numOps;         // User defined number of inserts
   int i;              // Loop index
   
   vector_create(&tempValues, 0);
   
   printf("Enter initial vector size: ");
   scanf("%d", &vectorSize);
   
   printf("Enter number of inserts: ");
   scanf("%d", &numOps);
   
   printf("  Resizing vector...");
   fflush(stdout);
   vector_resize(&tempValues, vectorSize);
   
   printf("done.\n");
   printf("  Writing to each element...");
   fflush(stdout);
   
   for (i = 0; i < vectorSize; ++i) {
      *vector_at(&tempValues, i) = 777; // Any value
   }
   
   printf("done.\n");
   printf("   Doing %d inserts at end...", numOps);
   fflush(stdout);
   
   for (i = 0; i < numOps; ++i) {
      vector_insert(&tempValues, vector_size(&tempValues), 888); // Any value
   }
   
   printf("done.\n");
   printf("   Doing %d inserts at beginning...", numOps);
   fflush(stdout);
   
   for (i = 0; i < numOps; ++i) {
      vector_insert(&tempValues, 0, 444);
   }
   
   printf("done.\n");
   printf("   Doing %d removes...", numOps);
   fflush(stdout);
   
   
   for (i = 0; i < numOps; ++i) {
      vector_erase(&tempValues, 0);
   }
   
   printf("done.\n");
   
   return 0;
}
