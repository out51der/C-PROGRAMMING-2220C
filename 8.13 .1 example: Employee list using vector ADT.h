#ifndef VECTOREMPLOYEE_H
#define VECTOREMPLOYEE_H

// struct and typedef for Employee
typedef struct EmployeeStruct {
   char name[50];
   char department[50];
   char title[50];
} Employee;

// struct and typedef declaration for Vector ADT
typedef struct vector_struct {
   Employee* elements;
   unsigned int size;
} vector;

// interface for accessing Vector ADT

// Initialize vector
void vector_create(vector* v, unsigned int vectorSize);

// Destroy vector
void vector_destroy(vector* v);

// Resize the size of the vector
void vector_resize(vector* v, unsigned int vectorSize);

// Return pointer to element at specified index
Employee* vector_at(vector* v, unsigned int index);

// Insert new value at specified index
void vector_insert(vector* v, unsigned int index, Employee value);

// Insert new value at end of vector
void vector_push_back(vector* v, Employee value);

// Erase (remove) value at specified index
void vector_erase(vector* v, unsigned int index);

// Return number of elements within vector
int vector_size(vector* v);

#endif

//VECTOR_EMPLOYEE.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vector_employee.h"

// Initialize vector with specified size
void vector_create(vector* v, unsigned int vectorSize) {
   int i;
   
   if (v == NULL) return;
   
   v->elements = (Employee*)malloc(vectorSize * sizeof(Employee));
   v->size = vectorSize;
   for (i = 0; i < v->size; ++i) {
      strcpy(v->elements[i].name, "");
      strcpy(v->elements[i].department, "");
      strcpy(v->elements[i].title, "");
   }
}

// Destroy vector
void vector_destroy(vector* v) {
   if (v == NULL) return;
   
   free(v->elements);
   v->elements = NULL;
   v->size = 0;
}

// Resize the size of the vector
void vector_resize(vector* v, unsigned int vectorSize) {
   int oldSize;
   int i;
   if (v == NULL) return;
   
   oldSize = v->size;
   v->elements = (Employee*)realloc(v->elements, vectorSize * sizeof(Employee));
   v->size = vectorSize;
   for (i = oldSize; i < v->size; ++i) {
      strcpy(v->elements[i].name, "");
      strcpy(v->elements[i].department, "");
      strcpy(v->elements[i].title, "");
   }
}

// Return pointer to element at specified index
Employee* vector_at(vector* v, unsigned int index) {
   if (v == NULL || index >= v->size) return NULL;
   
   return &(v->elements[index]);
}

// Insert new value at specified index
void vector_insert(vector* v, unsigned int index, Employee value) {
   int i;
   
   if (v == NULL || index > v->size) return;
   
   vector_resize(v, v->size + 1);
   for (i = v->size - 1; i > index; --i) {
      v->elements[i] = v->elements[i-1];
   }
   
   strcpy(v->elements[i].name, value.name);
   strcpy(v->elements[i].department, value.department);
   strcpy(v->elements[i].title, value.title);
}

// Insert new value at end of vector
void vector_push_back(vector* v, Employee value) {
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

