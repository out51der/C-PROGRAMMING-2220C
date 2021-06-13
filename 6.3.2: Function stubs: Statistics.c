#include <stdio.h>

int GetUserNum(){
   printf("FIXME: Finish GetUserNum()\n");
   


}

int ComputeAvg(){
   printf("FIXME: Finish ComputeAvg()\n");
   
   return -1;
   
}



int main(void) {
   int userNum1;
   int userNum2;
   int avgResult;

   userNum1 = GetUserNum();
   userNum2 = GetUserNum();

   avgResult = ComputeAvg(userNum1, userNum2);

   printf("Avg: %d\n", avgResult);

   return 0;
}
