#include <stdio.h>

int main(void) {
   const unsigned long KM_EARTH_TO_SUN = 149598000;        // Dist from Earth to sun
   const unsigned long long KM_PLUTO_TO_SUN = 5906376272;  // Dist from Pluto to sun
   
   // Output distances with min number of characters
   printf("Earth is %11lu", KM_EARTH_TO_SUN);
   printf(" kilometers from the sun.\n");
   printf("Pluto is %11llu", KM_PLUTO_TO_SUN);
   printf(" kilometers from the sun.\n");
   
   return 0;
}


