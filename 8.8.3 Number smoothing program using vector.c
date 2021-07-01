#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

// Get number from user
void GetNums(vector* nums) {
   int numsSize;     // Vector size
   int i;            // Loop index
   
   printf("Enter number of integers to be entered: ");
   scanf("%d", &numsSize);
   
   vector_resize(nums, numsSize);
   
   for (i = 0; i < vector_size(nums); ++i) {
      printf("%d: ", i + 1);
      scanf("%d", vector_at(nums, i));
   }
}

// Smooths by setting element to average of itself and next two elements
void FilterNums(vector* nums) {
   int i;

   for (i = 0; i < vector_size(nums) - 2; ++i) {
      *vector_at(nums, i) = (*vector_at(nums, i) +
                             *vector_at(nums, i + 1) +
                             *vector_at(nums, i + 2)) / 3;
   }
   
   *vector_at(nums, i) = (*vector_at(nums, i) +
                          *vector_at(nums, i + 1)) / 2;
   
   // Last element needs no averaging
}

// Print all elements within the vector
void PrintsNums(vector* nums) {
   int i;
   
   printf("Numbers: ");
   for (i = 0; i < vector_size(nums); ++i) {
      printf("%d ", *vector_at(nums, i));
   }
   printf("\n");
}

int main(void) {
   vector nums;
   
   vector_create(&nums, 0);
   
   GetNums(&nums);
   PrintsNums(&nums);
   FilterNums(&nums);
   PrintsNums(&nums);
   
   vector_destroy(&nums);
   
   return 0;
}
