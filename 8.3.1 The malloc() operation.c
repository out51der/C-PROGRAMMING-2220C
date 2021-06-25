
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int* myPtr = NULL;

  printf("myPtr: %p\n", (void*) myPtr);

  // Next line would cause error because myPtr is null
  // printf("*myPtr: %d\n", *myPtr); // ERROR
 
  // sizeof() returns number of bytes for type
  // malloc() allocates specified number of bytes
  // cast void pointer to the desired pointer type
  myPtr = (int*) malloc(sizeof(int));
  printf("myPtr: %p\n", (void*) myPtr);
 
  *myPtr = 555;
  printf("*myPtr: %d\n", *myPtr);
 
  return 0;
}


