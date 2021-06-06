#include <stdio.h>

int main(void) {
   const int SIZE_LIST = 4;
   int keysList[SIZE_LIST];
   int itemsList[SIZE_LIST];
   int i;

   scanf("%d", &keysList[0]);
   scanf("%d", &keysList[1]);
   scanf("%d", &keysList[2]);
   scanf("%d", &keysList[3]);

   scanf("%d", &itemsList[0]);
   scanf("%d", &itemsList[1]);
   scanf("%d", &itemsList[2]);
   scanf("%d", &itemsList[3]);
      
      for (i=0; i < SIZE_LIST; ++i) {
       if (keysList[i] > 40) {
          printf("%d;", itemsList[i]);
       }
       
         
      }
      
   printf("\n");

   return 0;
}
