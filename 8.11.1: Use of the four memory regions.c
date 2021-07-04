
#include <stdio.h>
#include <stdlib.h>

// Program is stored in code memory

int myGlobal = 33;    // In static memory

void MyFct() {
   int myLocal;      // On stack  
   myLocal = 999;
   printf(" %d", myLocal);
}

int main(void) {
   int myInt;            // On stack
   int* myPtr = NULL;    // On stack
   myInt = 555; 

   myPtr = (int *)malloc(sizeof(int)); // In heap
   *myPtr = 222;
   printf("%d %d", *myPtr, myInt);
   free(myPtr);  // Deallocated from heap

   MyFct();  // Stack grows, then shrinks

   return 0;
}
