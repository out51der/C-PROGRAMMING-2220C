#include <stdio.h>
#include <string.h>

typedef struct Car_struct {
   char type[20];
   char color[20];
} Car;

int main(void) {
   Car carList[3];

   strcpy(carList[0].type, "sedan");
   strcpy(carList[0].color, "blue");
   strcpy(carList[1].type, "SUV");
   strcpy(carList[1].color, "pink");
   strcpy(carList[2].type, "truck");
   strcpy(carList[2].color, "orange");

   printf("%s %s\n", carList[2].color, carList[2].type);
   printf("%s %s\n", carList[0].color, carList[0].type);

   return 0;
}
