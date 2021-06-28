
#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main(void){
 vector v;
 vector_create(&v, 3);

 *vector_at(&v, 0) = 122;
 *vector_at(&v, 1) = 119;
 *vector_at(&v, 2) = 117;

 printf("%d\n", *vector_at(&v, 1));

 return 0;
}
