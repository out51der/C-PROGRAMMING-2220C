#include <stdio.h>
#include <string.h>

void GetUserInfo(int* userAge, char userName[]) {
   printf("Enter your age: \n");
   scanf("%d", userAge);
   printf("Enter your name: \n");
   scanf("%s", userName);
}

int main(void) {
   int userAge;
   char userName[30];

   GetUserInfo(&userAge, userName);

   printf("%s is %d years old.\n", userName, userAge);

   return 0;
}
