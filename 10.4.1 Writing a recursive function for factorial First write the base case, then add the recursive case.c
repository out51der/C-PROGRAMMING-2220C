

// main(): Get N, print NFact(N)
int NFact(int N) {
   int factResult;

   if (N <= 1) { // Base case
      factResult = 1;
   }
   // FIXME: Finish
   return factResult;
}

// main(): Get N, print NFact(N)

int NFact(int N) {

   int factResult;
   if (N <= 1) { // Base case
      factResult = 1;
   }
  else { // recursive function
    factResult = N * NFact(N - 1);
  }
   return factResult;
}


/*
Enter N: 1
N! is: 1

Enter N: 6
N! is: 720
Enter N: 1
N! is: 1
*/
