#include <stdio.h>
#include <string.h>

// Source: www.statista.com, 2011

int main(void) {
   const int NUM_COUNTRY = 10;                           // Number of countries supported
   const int MAX_COUNTRY_NAME_LENGTH = 50;               // Max length for names
   char ctryNames[NUM_COUNTRY][MAX_COUNTRY_NAME_LENGTH]; // 2D array of country tv stats
   int arrPosition = 0;                                  // User specified position
   
   // Populate array
   strcpy(ctryNames[0], "U.S.A.");
   strcpy(ctryNames[1], "Italy");
   strcpy(ctryNames[2], "Poland");
   strcpy(ctryNames[3], "U.K.");
   strcpy(ctryNames[4], "Canada");
   strcpy(ctryNames[5], "Spain");
   strcpy(ctryNames[6], "France");
   strcpy(ctryNames[7], "Germany");
   strcpy(ctryNames[8], "Brazil");
   strcpy(ctryNames[9], "Russia");
   
   // Prompt user to enter desired position
   printf("Enter desired position (1-10): ");
   scanf("%d", &arrPosition);
   
   // Print results
   printf("People in %s watch the %d", ctryNames[arrPosition-1], arrPosition);
   if( arrPosition == 1 ) {
      printf("st");
   }
   else if( arrPosition == 2 ) {
      printf("nd");
   }
   else if( arrPosition == 3 ) {
      printf("rd");
   }
   else {
      printf("th");
   }
   printf(" most TV per day.\n");
   
   return 0;
}
