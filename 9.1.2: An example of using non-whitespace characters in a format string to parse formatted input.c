#include <stdio.h>
#include <string.h>

int main(void) {
   int currHour;      // User defined hour
   int currMinute;    // User defined minutes
   char optAmPm[3];   // User defined am/pm

   // Prompt user for input
   printf("Enter the time using the format: HH:MM AM/PM: ");
   scanf("%2d:%2d %2s", &currHour, &currMinute, optAmPm);
   
   // Output time in 12 hrs
   printf("In 12 hours it will be: ");
   if (strcmp(optAmPm, "AM") == 0) {
      printf("%02d:%02d PM\n", currHour, currMinute);
   }
   else {
      printf("%02d:%02d AM\n", currHour, currMinute);
   }
   
   return 0;
}
