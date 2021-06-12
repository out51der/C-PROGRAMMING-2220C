#include <stdio.h>
#include <stdbool.h>

void PrintMenu() {
   printf("Today's Menu:\n");
   printf("   1) Gumbo\n");
   printf("   2) Jambalaya\n");
   printf("   3) Quit\n\n");
}

int main() {
   bool quit = false;
   int choice;

   while (!quit) {
      PrintMenu();
      printf("Enter choice: ");
      scanf("%d", &choice);
      printf("\n");
      if (choice == 3) {
         printf("Goodbye\n");
         quit = true;
      }
      else {
         printf("Order: ");
         if (choice == 1) {
            printf("Gumbo\n");
         }
         else if (choice == 2) {
            printf("Jambalaya\n");
         }
      printf("\n");
      }  
   }  
   return 0;
}
