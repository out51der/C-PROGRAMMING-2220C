#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode_struct {
   int value;
   struct IntNode_struct* nextIntNodePtr;
} IntNode;

void IntNode_Create(IntNode* thisNode, int value, IntNode* nextLoc) {
   thisNode->value = value;
   thisNode->nextIntNodePtr = nextLoc;
}

void IntNode_InsertAfter(IntNode* thisNode, IntNode* newNode) {
   IntNode* tmpNext = NULL;

   tmpNext = thisNode->nextIntNodePtr;
   thisNode->nextIntNodePtr = newNode;
   newNode->nextIntNodePtr = tmpNext;
}

void IntNode_PrintNodeData(IntNode* thisNode) {
   printf("%d\n", thisNode->value);
}

IntNode* IntNode_GetNext(IntNode* thisNode) {
   return thisNode->nextIntNodePtr;
}

int main(void) {
   IntNode* headObj = NULL;
   IntNode* node1 = NULL;
   IntNode* node2 = NULL;
   IntNode* node3 = NULL;
   IntNode* node4 = NULL;
   IntNode* currObj = NULL;

   headObj = (IntNode*)malloc(sizeof(IntNode));
   IntNode_Create(headObj, -1, NULL);

   node1 = (IntNode*)malloc(sizeof(IntNode));
   IntNode_Create(node1, 1, NULL);
   IntNode_InsertAfter(headObj, node1);

   node2 = (IntNode*)malloc(sizeof(IntNode));
   IntNode_Create(node2, 2, NULL);
   IntNode_InsertAfter(headObj, node2);

   node3 = (IntNode*)malloc(sizeof(IntNode));
   IntNode_Create(node3, 3, NULL);
   IntNode_InsertAfter(headObj, node3);

   node4 = (IntNode*)malloc(sizeof(IntNode));
   IntNode_Create(node4, 4, NULL);
   IntNode_InsertAfter(node3, node4);

   currObj = headObj;
   while (currObj != NULL) {
      IntNode_PrintNodeData(currObj);
      currObj = IntNode_GetNext(currObj);
   }

   return 0;
}
