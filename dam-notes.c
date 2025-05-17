DMA => Dynamic Memory Allocation :
    Dynamic Memory Allocation (DMA) in C 
allows programs to request memory at runtime,
which is particularly useful when the size
and complexity of data structures are not 
known at compile time.

#include<stdlib.h>
  malloc()
  calloc()
  realloc()
  free()
// malloc() => Memory Allocation ()
int n = 5;
     int * p =(int*)malloc(n * sizeof(int));
//calloc() => Contiguous Memory Allocation 
      int *q =(int*)calloc(n , sizeof(int));
  
// Realloc() => Reallocation 
  p= realloc(p , 20);
  //free() 
  free(p);
