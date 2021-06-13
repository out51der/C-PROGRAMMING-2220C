#include <stdio.h>

void AdjustScores(double scoreVals[], int numVals, 
                  double scoreAdj) {
   int i;
   
   for (i = 0; i < numVals; ++i) {
      scoreVals[i] = scoreVals[i] + scoreAdj;
   }

}

void PrintScores(const double scoreVals[], int numVals) {
   int i;
   
   for (i = 0; i < numVals; ++i) {
      printf(" %lf", scoreVals[i]);
   }
   printf("\n");
   
}

double CalculateAverage(const double scoreVals[], int numVals) {
   int i;
   double scoreSum = 0;
   
   for (i = 0; i < numVals; ++i) {
      scoreSum = scoreSum + scoreVals[i];
   }
   
   return scoreSum / numVals;
}

int main(void) {
   const int NUM_SCORES = 4;    // Array size
   double testScores[NUM_SCORES];  // User test scores
   int i;
   double averageScore;
   
   // Prompt user to enter test scores
   printf("Enter %d test scores:\n", NUM_SCORES);
   for (i = 0; i < NUM_SCORES; ++i) {
      printf("Test score: ");
      scanf("%lf", &(testScores[i]));
   }
   printf("\n");
   
   // Print original scores
   printf("Original test scores: ");
   PrintScores(testScores, NUM_SCORES);
   
   AdjustScores(testScores, NUM_SCORES, 2.0);
   
   printf("Adjusted test scores: ");
   PrintScores(testScores, NUM_SCORES);
   
   // Call function to calculate average
   averageScore = CalculateAverage(testScores, NUM_SCORES);
   printf("Average adjusted test score: ");
   printf("%lf\n", averageScore);
   
   return 0;
}
