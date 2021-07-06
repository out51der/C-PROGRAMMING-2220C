#include <stdio.h>

int main(void) {
   int userInt1;
   int userInt2;

   printf("Enter two integers separated by a comma: ");
   scanf("%d, %d", &userInt1, &userInt2);
   printf("%d + %d = %d\n", userInt1, userInt2, userInt1 + userInt2);

   return 0;
}
