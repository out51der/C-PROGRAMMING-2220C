#include <stdio.h>
#include <stdlib.h>

int main(void) {
   FILE* inFile = NULL; // File pointer
   int* userNums;       // User numbers; memory allocated later
   int arrSize;         // User-specified number of numbers
   int i;               // Loop index
   
   
   // Try to open the file
   inFile = fopen("myfile.txt", "r");
   
   if (inFile == NULL) {
      printf("Could not open file myfile.txt.\n");
      return -1; // -1 indicates error
   }
   
   // Can now use fscanf(inFile, ...) like scanf()
   fscanf(inFile, "%d", &arrSize);
   
   // Allocate enough memory for nums
   userNums = (int*)malloc(sizeof(int)*arrSize);
   if (userNums == NULL) {
      fclose(inFile); // Done with file, so close it
      return -1;
   }
   
   // Get user specified numbers. If too few, may encounter problems
   i = 1;
   while (i <= arrSize) {
      fscanf(inFile, "%d", &(userNums[i-1]));
      i = i + 1;
   }
   
   // Done with file, so close it
   fclose(inFile);
   
   // Print numbers
   printf("Numbers: ");
   
   i = 0;
   while (i < arrSize) {
      printf("%d ", userNums[i]);
      ++i;
   }
   
   printf("\n");
   
   // Deallocate memory for nums
   free(userNums);
   
   return 0;
}
