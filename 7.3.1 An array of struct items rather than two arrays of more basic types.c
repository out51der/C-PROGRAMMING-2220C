#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const int MAX_COUNTRY_NAME_LENGTH = 50;

typedef struct CountryTvWatch_struct {
   char countryName[MAX_COUNTRY_NAME_LENGTH];
   int tvMinutes;
} CountryTvWatch;

int main(void) {
   // Source: www.statista.com, 2010
   const int NUM_COUNTRIES = 4;
   
   CountryTvWatch countryList[NUM_COUNTRIES];
   char countryToFind[MAX_COUNTRY_NAME_LENGTH];
   bool countryFound;
   int i;
   
   strcpy(countryList[0].countryName, "Brazil");
   countryList[0].tvMinutes = 222;
   strcpy(countryList[1].countryName, "India");
   countryList[1].tvMinutes = 119;
   strcpy(countryList[2].countryName, "U.K.");
   countryList[2].tvMinutes = 242;
   strcpy(countryList[3].countryName, "U.S.A.");
   countryList[3].tvMinutes = 283;
   
   printf("Enter country name: ");
   scanf("%s", countryToFind);
  
   countryFound = false;
   for (i = 0; i < NUM_COUNTRIES && !countryFound; ++i) { // Find country's index
      if (strcmp(countryList[i].countryName, countryToFind) == 0) {
         countryFound = true;
         printf("People in %s watch\n", countryToFind);
         printf("%d minutes of TV daily.\n", countryList[i].tvMinutes);
      }
   }
   if (!countryFound) {
      printf("Country not found, try again.\n");
   }
   
   return 0;
}
