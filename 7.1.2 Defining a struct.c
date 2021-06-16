#include <stdio.h>

typedef struct PatientData_struct {
   int heightInches;
   int weightPounds;
} PatientData;


int main(void) {
   PatientData lunaLovegood;

   scanf("%d", &lunaLovegood.heightInches);
   scanf("%d", &lunaLovegood.weightPounds);

   printf("Patient data: %d in, %d lbs\n", lunaLovegood.heightInches, lunaLovegood.weightPounds);

   return 0;
}
