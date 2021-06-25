#include <stdio.h>
#include <stdlib.h>

typedef struct bagContents_struct {
   int numApples;
   int numOranges;
} bagContents;

void bagContents_PrintBag(bagContents* itemPtr) {
   if (itemPtr == NULL) return;

   printf("Apples: %d\n", itemPtr->numApples);
   printf("Oranges: %d\n", itemPtr->numOranges);
}

int main(void) {
   bagContents* groceryPtr = NULL;

   groceryPtr = (bagContents*)malloc(sizeof(bagContents));

   /* Your solution goes here  */
   groceryPtr->numApples = 10;
   groceryPtr->numOranges = 3;

   bagContents_PrintBag(groceryPtr);

   return 0;
}
