int main(void) {
   int someInt;
   int* valPointer; 

   someInt = 5;
   printf("someInt address is %p\n", (void*) &someInt);

   valPointer = &someInt;        
   printf("valPointer is %p\n", (void*) valPointer);

   return 0;
}
