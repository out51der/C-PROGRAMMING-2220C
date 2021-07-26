
// Get input into userChar

while (userChar == 'y') {
   // Do something ...
   // Get input into userChar
}


#include <stdio.h>

int main(void) {
  int userNum;
 
  scanf("%d", &userNum);
 
  while (userNum > 0) {
     printf("%d\n", userNum % 10);
     userNum = userNum / 10;
  }
 
  return 0;
}
