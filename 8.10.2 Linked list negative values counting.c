#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode_struct {
   int dataVal;
   struct IntNode_struct* nextNodePtr;
} IntNode;

// Constructor
void IntNode_Create(IntNode* thisNode, int dataInit, IntNode* nextLoc) {
   thisNode->dataVal = dataInit;
   thisNode->nextNodePtr = nextLoc;
}

/* Insert newNode after node.
 Before: thisNode -- next
 After: thisNode -- newNode -- next
*/
void IntNode_InsertAfter(IntNode* thisNode, IntNode* newNode) {
   IntNode* tmpNext = NULL;

   tmpNext = thisNode->nextNodePtr; // Remember next
   thisNode->nextNodePtr = newNode; // this -- new -- ?
   newNode->nextNodePtr = tmpNext;  // this -- new -- next
}

// Grab location pointed by nextNodePtr
IntNode* IntNode_GetNext(IntNode* thisNode) {
   return thisNode->nextNodePtr;
}

int IntNode_GetDataVal(IntNode* thisNode) {
   return thisNode->dataVal;
}

int main(void) {
   IntNode* headObj = NULL; // Create intNode objects
   IntNode* currObj = NULL;
   IntNode* lastObj = NULL;
   int i;                   // Loop index
   int negativeCntr;

   negativeCntr = 0;

   headObj = (IntNode*)malloc(sizeof(IntNode)); // Front of nodes list
   IntNode_Create(headObj, -1, NULL);
   lastObj = headObj;

   for (i = 0; i < 10; ++i) {                // Append 10 rand nums
      currObj = (IntNode*)malloc(sizeof(IntNode));
      IntNode_Create(currObj, (rand() % 21) - 10, NULL);
      IntNode_InsertAfter(lastObj, currObj); // Append curr
      lastObj = currObj;                     // Curr is the new last item
   }

   currObj = headObj;                // Print the list
   while (currObj != NULL) {
      printf("%d, ", IntNode_GetDataVal(currObj));
      currObj = IntNode_GetNext(currObj);
   }
   printf("\n");

   currObj = headObj;                // Count number of negative numbers
   while (currObj != NULL) {

      /* Your solution goes here  */
     if(currObj->dataVal <0 )
      ++negativeCntr;
     
     

      currObj = IntNode_GetNext(currObj);
   }
   printf("Number of negatives: %d\n", negativeCntr);

   return 0;
}
