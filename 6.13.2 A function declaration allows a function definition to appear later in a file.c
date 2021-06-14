#include <stdio.h>
#include <math.h> // To use "pow" function

/* Program to convert given-year U.S. dollars to
 current dollars, using simplistic method of 4% annual inflation.
 Source: http://inflationdata.com (See: Historical) */

// (Function DECLARATION)
double ToCurrDollars (double pastDol, int pastYr, int currYr);

int main(void) {
   double pastDol;  // Starting dollar amount
   double currDol;  // Ending dollar amount (converted value)
   int pastYr;        // Starting year
   int currYr;        // Ending year (converted to year)
   
   // Prompt user for previous year/dollar and current year
   printf("Enter current year: ");
   scanf("%d", &currYr);
   printf("Enter past year: ");
   scanf("%d", &pastYr);
   printf("Enter past dollars (Ex: 1000): ");
   scanf("%lf", &pastDol);
   
   // Function call to convert past to current dollars
   currDol = ToCurrDollars(pastDol, pastYr, currYr);
   
   printf("$%lf in %d is about $%lf in %d\n",
          pastDol, pastYr, currDol, currYr);
   
   return 0;
}

// (Function DEFINITION)
// Functin returns equivalent value of pastDol in pastYr to currYr
double ToCurrDollars (double pastDol, int pastYr, int currYr) {
   double currDol;  // Equivalent dollar amount given inflation
   
   currDol = pastDol * pow(1.04, currYr - pastYr );
   
   return currDol;
}
