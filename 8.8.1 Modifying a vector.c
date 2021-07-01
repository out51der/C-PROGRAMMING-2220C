#include <stdio.h>
#include <stdlib.h>

// struct and typedef declaration for Vector ADT
typedef struct vector_struct {
   int* elements;
   unsigned int size;
} vector;

// Initialize vector with specified size
void vector_create(vector* v, unsigned int vectorSize) {
   int i;

   if (v == NULL) return;

   v->elements = (int*)malloc(vectorSize * sizeof(int));
   v->size = vectorSize;
   for (i = 0; i < v->size; ++i) {
      v->elements[i] = 0;
   }
}

// Resize the size of the vector
void vector_resize(vector* v, unsigned int vectorSize) {
   int oldSize;
   int i;
   if (v == NULL) return;

   oldSize = v->size;
   v->elements = (int*)realloc(v->elements, vectorSize * sizeof(int));
   v->size = vectorSize;
   for (i = oldSize; i < v->size; ++i) {
      v->elements[i] = 0;
   }
}

// Return pointer to element at specified index
int* vector_at(vector* v, unsigned int index) {
   if (v == NULL || index >= v->size) return NULL;

   return &(v->elements[index]);
}

// Insert new value at specified index
void vector_insert(vector* v, unsigned int index, int value) {
   int i;

   if (v == NULL || index > v->size) return;

   vector_resize(v, v->size + 1);
   for (i = v->size - 1; i > index; --i) {
      v->elements[i] = v->elements[i-1];
   }
   v->elements[index] = value;
}

// Insert new value at end of vector
void vector_push_back(vector* v, int value) {
   vector_insert(v, v->size, value);
}

// Erase (remove) value at specified index
void vector_erase(vector* v, unsigned int index) {
   int i;

   if (v == NULL || index >= v->size) return;

   for (i = index; i < v->size - 1; ++i) {
      v->elements[i] = v->elements[i+1];
   }
   vector_resize(v, v->size - 1);
}

// Return number of elements within vector
int vector_size(vector* v) {
   if (v == NULL) return -1;

   return v->size;
}

void PrintVectors(vector* numberList) {
   int i;

   for (i = 0; i < vector_size(numberList); ++i) {
      printf("%d ", *vector_at(numberList, i));
   }
   printf("\n");
}

int main(void) {
   vector numberList;
   vector_create(&numberList, 0);

   // Populate vector with 101 200 103
   vector_push_back(&numberList, 101);
   vector_push_back(&numberList, 200);
   vector_push_back(&numberList, 103);

   // Erase 200 then insert 100 and 102

   /* Your solution goes here  */
   
   vector_erase(&numberList, 1);
   vector_insert(&numberList, 0, 100);
   vector_insert(&numberList, 2, 102);

   PrintVectors(&numberList);

   return 0;
}
