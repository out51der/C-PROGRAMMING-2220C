void MyFct(int inParm) {
   int locVar;
   ...
   MyFct(...);
   ...
}

int main(void) {
   int myVar;
   MyFct(...);
   ...
}


// Repeating tghe myFct() Deep recursion may cause stack overflow, causing a program to crash.
