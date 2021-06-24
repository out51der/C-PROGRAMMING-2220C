void PrintValue(int* valuePointer) {
   if (valuePointer == NULL) {
      printf("Pointer is null\n");
   }
   else {
      printf("%d\n", *valuePointer);
   }
}

int main(void) {
   int someInt = 5;
   int* valPointer = NULL;

   PrintValue(valPointer);
   valPointer = &someInt;        
   PrintValue(valPointer);

   return 0;
}
