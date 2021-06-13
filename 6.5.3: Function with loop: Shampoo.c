#include <stdio.h>

void PrintShampooInstructions(int numCycles){

int i;

if(numCycles < 1){

printf("Too few.\n");
}
else if(numCycles > 4){

printf("Too many.\n");
}
else

{

for(i=1;i<=numCycles;i++)

{

printf("%d: Lather and rinse.\n",i);

}

printf("Done.\n");

}

}

int main(void) {
   int userCycles;

   scanf("%d", &userCycles);
   PrintShampooInstructions(userCycles);

   return 0;
}
