#include <stdio.h>

void CoordTransform(int xVal,int yVal,int* xValNew, int* yValNew){
   
   *xValNew = (xVal +1)*2;
   *yValNew = (yVal +1)*2;
   
}

int main(void) {
   int xValNew;
   int yValNew;
   int xValUser;
   int yValUser;

   scanf("%d", &xValUser);
   scanf("%d", &yValUser);

   CoordTransform(xValUser, yValUser, &xValNew, &yValNew);
   printf("(%d, %d) becomes (%d, %d)\n", xValUser, yValUser, xValNew, yValNew);

   return 0;
}
