#include <stdio.h>

/* Returns fee charged by ebay.com given the selling
   price of fixed-price books, movies, music, or video-games.
   Fee is $0.50 to list plus a % of the selling price:
   13% for $50.00 or less
    plus 5% for $50.01 to $1000.00
    plus 2% for $1000.01 or more
   Source: http://pages.ebay.com/help/sell/fees.html, 2012.

 Note: double variables are not normally used for dollars/cents
 due to the internal representation's precision, but are used
 here for simplicity.
 */

// Function determines eBay price given item selling price
double CalcEbayFee(double sellPrice) {
   const double BASE_LIST_FEE     = 0.50; // Listing Fee
   const double PERC_50_OR_LESS   = 0.13; // % $50 or less
   const double PERC_50_TO_1000   = 0.05; // % $50.01..$1000.00
   const double PERC_1000_OR_MORE = 0.02; // % $1000.01 or more
   double feeTotal;                       // Resulting eBay fee
   
   feeTotal = BASE_LIST_FEE;
   
   // Determine additional fee based on selling price
   if (sellPrice <= 50.00) { // $50.00 or lower
      feeTotal = feeTotal + (sellPrice * PERC_50_OR_LESS);
   }
   else if (sellPrice <= 1000.00) { // $50.01..$1000.00
      feeTotal = feeTotal + (50 * PERC_50_OR_LESS )
      + ((sellPrice - 50) * PERC_50_TO_1000);
   }
   else { // $1000.01 and higher
      feeTotal = feeTotal + (50 * PERC_50_OR_LESS)
      + ((1000 - 50) * PERC_50_TO_1000)
      + ((sellPrice - 1000) * PERC_1000_OR_MORE);
   }
   
   return feeTotal;
}

int main(void) {
   double sellingPrice;       // User defined selling price
   
   // Prompt user for selling price, call eBay fee function
   printf("Enter item selling price (e.g., 65.00): ");
   scanf("%lf", &sellingPrice);
   printf("eBay fee: $%lf\n", CalcEbayFee(sellingPrice));
   
   return 0;
}
