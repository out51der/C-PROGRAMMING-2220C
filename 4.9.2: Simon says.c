#include <stdio.h>
#include <string.h>

int main(void) {
   char simonPattern[50];
   char userPattern[50];
   int userScore;
   int i;

   userScore = 0;

   scanf("%s", simonPattern);
   scanf("%s", userPattern);

   /* Your solution goes here  */
  
  for(i = 0; simonPattern[i] != '\0'; i++){
		if(userPattern[i] != simonPattern[i]){
         userScore=i;
			break;
		}

	}

   printf("userScore: %d\n", userScore);

   return 0;
}
