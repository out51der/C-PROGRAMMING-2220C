
#include <stdio.h>

// Returns 0 if value is not prime, 1 if value is prime
int IsPrime(int testVal, int divVal)
{
   // Base case 1: 0 and 1 are not prime, testVal is not prime
      if(testVal==0 || testVal==1)
      return 0;

   // Base case 2: testVal only divisible by 1, testVal is prime
   
      else if(divVal==1)
      return 1;
   
      
   // Recursive Case
      // Check if testVal can be evenly divided by divVal
      // Hint: use the % operator
      else if(testVal%divVal == 0)
      return 0;
      
      
      // If not, recursive call to isPrime with testVal and (divVal - 1)
      return IsPrime(testVal, divVal-1);
      return 0;   

}

int main(void){
   int primeCheckVal;     // Value checked for prime
   
   // Check primes for values 1 to 10
   for (primeCheckVal = 1; primeCheckVal <= 10; ++primeCheckVal) {
      if (IsPrime(primeCheckVal, (primeCheckVal - 1)) == 1) {
         printf("%d is prime.\n", primeCheckVal);
      }
      else {
         printf("%d is not prime.\n", primeCheckVal);
      }
   }
}
