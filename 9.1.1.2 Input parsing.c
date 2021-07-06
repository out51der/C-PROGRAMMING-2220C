
#include <stdio.h>
#include <string.h>

int main(void) {
   char object1Info[100] = "Pen 7 4";
   char object2Info[100] = "Notepad 13 12";
   char object3Info[100] = "Book 25 24";

   char object[50];
   int quantity;
   int price;

   sscanf(object1Info, "%s %d %d", object, &price, &quantity);

   printf("%s x%d\n", object, quantity);
   printf("Price: %d", price);

   return 0;
}
