Pointers : 
  A pointer is a special variable which can store the address of another variable.
types:
   single pointer
   double pointer....etc


declaration syntax:
single pointer:
    datatype *pointer_Name ;
    int * p;
 double pointer:
     datatype **pointer_Name;
     int **p; 




     * => value at 
     & => address of

   8bytes size




int main() {
   int a=12, b= 43;
   int *ptr, *q = &b;
   ptr=&a;
//        
   *ptr= *q + 12;// 
   ptr= q;
   *q= *ptr - *q;
   *ptr= *q * 10 ;
   printf("%d %d %d %d", a,b,*ptr ,*q);
  return 0;
}

#include <stdio.h>
//array using pointer
int main()
{
   int n=5;
   int *p=&n;
   scanf("%d",p);
   int a[n];
   int *pp=a;
   for(int i=0;i<n;i++){
    scanf("%d",pp+i);
   }
   for(int i=0;i<n;i++){
    printf("%d ",*(pp+i));
   }
}
