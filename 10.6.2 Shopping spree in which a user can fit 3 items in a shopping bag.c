#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Item_struct {
   char itemName[50]; // Name of item
   int priceDollars;  // Price of item
} Item;

const int TOTAL_ITEMS = 4;                    // Total number of items available
const unsigned int MAX_SHOPPING_BAG_SIZE = 3; // Max number of items in shopping bag

/* Output every possible combination of items that
   fit in a shopping bag. Each recursive call moves
   one item into the bag.
*/
void ShoppingBagCombinations(Item* currBag,        // Bag contents
                             Item* remainingItems, // Available items
                             bool* beenAdded,      // Items already in shopping bag
                             int bagCnt) {         // Current shopping bag size
   int bagValue;     // Cost of items in shopping bag
   int i;            // Loop index
   
   if (bagCnt == MAX_SHOPPING_BAG_SIZE) { // Base case: Shopping bag full
      bagValue = 0;
      for(i = 0; i < bagCnt; ++i) {
         printf("%s  ", currBag[i].itemName);
         bagValue += currBag[i].priceDollars;
      }
      printf("= $%d\n", bagValue);
   }
   else {                                 // Recursive case: move one
      for (i = 0; i < TOTAL_ITEMS; ++i) { // item to bag
         if (!beenAdded[i]) {
            // Move item to bag
            beenAdded[i] = true;
            currBag[bagCnt] = remainingItems[i];
            
            ShoppingBagCombinations(currBag, remainingItems,
                                    beenAdded, bagCnt + 1);
            
            // Take item out of bag
            beenAdded[i] = false;
         }
      }
   }
}

int main(void) {
   Item* possibleItems = NULL; // Possible shopping items
   Item* shoppingBag = NULL;   // Current shopping bag
   bool* itemBeenAdded = NULL; // Track if item already in bag
   Item tmpGroceryItem;        // Temp item
   
   possibleItems = (Item*)malloc(sizeof(Item) * TOTAL_ITEMS);
   shoppingBag = (Item*)malloc(sizeof(Item) * TOTAL_ITEMS);
   itemBeenAdded = (bool*)malloc(sizeof(bool) * TOTAL_ITEMS);
   
   // No items added yet
   itemBeenAdded[0] = false;
   itemBeenAdded[1] = false;
   itemBeenAdded[2] = false;
   itemBeenAdded[3] = false;
   
   // Populate grocery with different items
   strcpy(tmpGroceryItem.itemName, "Milk");
   tmpGroceryItem.priceDollars = 2;
   possibleItems[0] = tmpGroceryItem;
   
   strcpy(tmpGroceryItem.itemName, "Belt");
   tmpGroceryItem.priceDollars = 24;
   possibleItems[1] = tmpGroceryItem;
   
   strcpy(tmpGroceryItem.itemName, "Toys");
   tmpGroceryItem.priceDollars = 19;
   possibleItems[2] = tmpGroceryItem;
   
   strcpy(tmpGroceryItem.itemName, "Cups");
   tmpGroceryItem.priceDollars = 12;
   possibleItems[3] = tmpGroceryItem;
   
   // Try different combinations of three items
   ShoppingBagCombinations(shoppingBag, possibleItems,
                           itemBeenAdded, 0);
   
   return 0;
}
