
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   const int NUM_VALUES = 8; // Num user numbers
   FILE* outFile = NULL;     // File pointer
   int userNums[NUM_VALUES]; // User numbers
   int i;                    // Loop index
   
   // Get numbers from user
   printf("\nEnter %d numbers...\n", NUM_VALUES);
   for (i = 0; i < NUM_VALUES; ++i) {
      printf("%d: ", i);
      scanf("%d", &(userNums[i]));
   }
   
   // Try to open the file
   outFile = fopen("myfile.bin", "wb");
   if( outFile == NULL ) {
      printf("Could not open file myfile.bin.\n");
      return -1; // -1 indicates error
   }
   
   // Write user values to output file
   printf("Writing numbers to myfile.bin.\n");
   for (i = 0; i < NUM_VALUES; ++i) {
      fwrite(&(userNums[i]), sizeof(int), 1, outFile);
   }
   
   // Done with file, so close it
   printf("Closing file myfile.bin.\n");
   fclose(outFile);
   
   return 0;
}


