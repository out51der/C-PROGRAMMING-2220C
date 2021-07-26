#include <stdio.h>

int main(void) {
   int userNum;
   int i;
   int j;

   scanf("%d", &userNum);

   /* Your solution goes here  */
  for (int i = 0; i <= userNum; i++) {
    for (int j = 0; j < i; j++) {
        printf(" ");
    }
    printf("%d\n",i);
}

   return 0;
}
