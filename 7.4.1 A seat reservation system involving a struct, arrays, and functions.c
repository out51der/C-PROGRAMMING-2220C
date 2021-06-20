
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Seat_struct {
   char firstName[50];
   char lastName[50];
   int  amountPaid;
} Seat;

/*** Functions for Seat ***/

void SeatMakeEmpty(Seat* seat) {
   strcpy((*seat).firstName, "empty");
   strcpy((*seat).lastName,  "empty");
   (*seat).amountPaid = 0;
}

bool SeatIsEmpty(Seat seat) {
   return (strcmp(seat.firstName, "empty") == 0);
}

void SeatPrint(Seat seat) {
   printf("%s ", seat.firstName);
   printf("%s, ", seat.lastName);
   printf("Paid: %d\n", seat.amountPaid);
}
/*** End functions for Seat ***/

/*** Functions for array of Seat ***/
void SeatsMakeEmpty(Seat seats[], int numSeats) {
   int i;
   
   for (i = 0; i < numSeats; ++i) {
      SeatMakeEmpty(&seats[i]);
   }
}

void SeatsPrint(Seat seats[], int numSeats) {
   int i;
   
   for (i = 0; i < numSeats; ++i) {
      printf("%d: ", i);
      SeatPrint(seats[i]);
   }
}
/*** End functions for array of Seat ***/

int main(void) {
   const int NUM_SEATS = 5;
   char userKey;
   int  seatNum;
   Seat allSeats[NUM_SEATS];
   Seat currSeat;
   
   userKey = '-';

   SeatsMakeEmpty(allSeats, NUM_SEATS);
   
   while (userKey != 'q') {
      printf("Enter command (p/r/q): ");
      scanf(" %c", &userKey);
      
      if (userKey == 'p') { // Print seats
         SeatsPrint(allSeats, NUM_SEATS);
         printf("\n");
      }
      else if (userKey == 'r') { // Reserve seat
         printf("Enter seat num: ");
         scanf("%d", &seatNum);
         
         if (!SeatIsEmpty(allSeats[seatNum])) {
            printf("Seat not empty.\n\n");
         }
         else {
            printf("Enter first name: ");
            scanf("%s", currSeat.firstName);
            printf("Enter last name: ");
            scanf("%s", currSeat.lastName);
            printf("Enter amount paid: ");
            scanf("%d", &currSeat.amountPaid);
            
            allSeats[seatNum] = currSeat;
            
            printf("Completed.\n\n");
         }
      }
      // FIXME: Add option to delete reservations
      else if (userKey == 'q') { // Quit
         printf("Quitting.\n");
      }
      else {
         printf("Invalid command.\n\n");
      }
   }
   
   return 0;
}
