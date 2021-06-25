
#include <stdio.h>
#include <stdlib.h>

typedef struct myItem_struct {
   int num1;
   int num2;
} myItem;

void myItem_PrintNums(myItem* itemPtr) {
   if (itemPtr == NULL) return;
   
   printf("num1: %d\n", itemPtr->num1);
   printf("num2: %d\n", itemPtr->num2);
}

int main(void) {
   myItem* myItemPtr1 = NULL;
   
   myItemPtr1 = (myItem*)malloc(sizeof(myItem));
   
   myItemPtr1->num1 = 5;
   (*myItemPtr1).num2 = 10;
   
   myItem_PrintNums(myItemPtr1);
   
   return 0;
}
