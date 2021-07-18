#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const int NUM_CITIES = 3; // Number of cities

int cityDistances[3][3];  // Distance between cities
char cityNames[3][50];    // City names

/* Output every possible travel path.
   Each recursive call moves to a new city.
*/
void TravelPaths(int* currPath, int* toVisit,
                 bool* haveBeen, int cityCnt) {
   int totalDist;     // Total distance given current path
   int i;             // Loop index
   
   if (cityCnt == NUM_CITIES) { // Base case: Visited all cities
      totalDist = 0;            // return total path distance
      for (i = 0; i < cityCnt; ++i) {
         printf("%s   ", cityNames[currPath[i]]);
         
         if (i > 0) {
            totalDist += cityDistances[currPath[i - 1]][currPath[i]];
         }
      }
      
      printf("= %d\n", totalDist);
   }
   else {                       // Recursive case: pick next city
      for (i = 0; i < NUM_CITIES; ++i) {
         if (!haveBeen[i]) {
            // Add city to travel path
            haveBeen[i] = true;
            currPath[cityCnt] = toVisit[i];
            
            TravelPaths(currPath, toVisit, haveBeen, cityCnt+1);
            
            // Remove city from travel path
            haveBeen[i] = false;
         }
      }
   }
}

int main(void) {
   int* currPath = NULL;  // Current path traveled
   int* toVisit = NULL;   // Cities left to visit
   bool* haveBeen = NULL; // City already visited
   
   // Initialize distances array
   cityDistances[0][0] = 0;
   cityDistances[0][1] = 960;  // Boston-Chicago
   cityDistances[0][2] = 2960; // Boston-Los Angeles
   cityDistances[1][0] = 960;  // Chicago-Boston
   cityDistances[1][1] = 0;
   cityDistances[1][2] = 2011; // Chicago-Los Angeles
   cityDistances[2][0] = 2960; // Los Angeles-Boston
   cityDistances[2][1] = 2011; // Los Angeles-Chicago
   cityDistances[2][2] = 0;
   
   strcpy(cityNames[0], "Boston");
   strcpy(cityNames[1], "Chicago");
   strcpy(cityNames[2], "Los Angeles");
   
   currPath = (int*)malloc(sizeof(int) * NUM_CITIES);
   toVisit = (int*)malloc(sizeof(int) * NUM_CITIES);
   haveBeen = (bool*)malloc(sizeof(bool) * NUM_CITIES);
   
   toVisit[0] = 0;
   toVisit[1] = 1;
   toVisit[2] = 2;
   
   haveBeen[0] = false;
   haveBeen[1] = false;
   haveBeen[2] = false;
   
   // Explore different paths   
   TravelPaths(currPath, toVisit, haveBeen, 0);
   
   return 0;
}
