#include <stdio.h>

typedef struct InventoryTag_struct {
   int itemID;
   int quantityRemaining;
} InventoryTag;

int main(void) {
   InventoryTag redSweater;

   scanf("%d", &redSweater.itemID);
   scanf("%d", &redSweater.quantityRemaining);

   printf("Inventory ID: %d, Qty: %d\n", redSweater.itemID, redSweater.quantityRemaining);

   return 0;
}
