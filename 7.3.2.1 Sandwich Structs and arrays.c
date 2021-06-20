#include <stdio.h>
#include <string.h>

typedef struct Sandwich_struct {
   char sandwichName[75];
   char ingredients[75];
} Sandwich;

int main(void) {

   Sandwich availableSandwiches[3];

   strcpy(availableSandwiches[0].sandwichName, "Chicken and Bacon");
   strcpy(availableSandwiches[1].sandwichName, "Chicken breast");
   strcpy(availableSandwiches[2].sandwichName, "Chicken with peppers");
   strcpy(availableSandwiches[0].ingredients, "Crispy chicken, onions, lettuce, bacon, mayonnaise");
   strcpy(availableSandwiches[1].ingredients, "Grilled chicken, lettuce, tomato");
   strcpy(availableSandwiches[2].ingredients, "Grilled chicken, red and green peppers, barbecue sauce");

   printf("%s: %s\n", availableSandwiches[0].sandwichName, availableSandwiches[0].ingredients);
   printf("%s: %s\n", availableSandwiches[1].sandwichName, availableSandwiches[1].ingredients);
   printf("%s: %s\n", availableSandwiches[2].sandwichName, availableSandwiches[2].ingredients);

   return 0;
}
