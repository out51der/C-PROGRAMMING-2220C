#include <stdio.h>

int main(void) {
   int numRows;
   int numColumns;
   int currentRow;
   int currentColumn;
   char currentColumnLetter;

   scanf("%d", &numRows);
   scanf("%d", &numColumns);

   /* Your solution goes here  */
  for(currentRow=1; currentRow<= numRows; currentRow++)
{
for(currentColumn=65; currentColumn <= 65 + numColumns -1; currentColumn++)
{
currentColumnLetter = currentColumn;
printf("%d%c ",currentRow,currentColumnLetter);
}
}

   printf("\n");

   return 0;
}
