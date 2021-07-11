#include <stdio.h>

int main(void) {
   FILE* outFile = NULL;    // File pointer
   
   // Open file
   outFile = fopen("myoutfile.txt", "w");
   
   if (outFile == NULL) {
      printf("Could not open file myoutfile.txt.\n");
      return -1; // -1 indicates error
   }
   
   // Write to file
   fprintf(outFile, "Hello\n");
   fprintf(outFile, "1 2 3\n");
   
   // Done with file, so close it
   fclose(outFile);
   
   return 0;
}
