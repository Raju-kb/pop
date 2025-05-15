#include<stdio.h>
int main() {
   int n = 7;
   for(int i=0;i<n;i++){
       for(int j =0;j<n;j++){
           if(i==n/2||j==n-1   && i > 0 && i < n / 2    ||j==0 || i==0 || (i - j == n / 2))
           printf("*");
           else 
           printf(" ");
       }
       printf("   ");
      
       for(int j =0;j<n;j++){
           if(i==0||i==n/2||i==n-1 && i<j ||i==0  ||j==n-1 ||j==0  )
           printf("*");
           else 
           printf(" ");
       }
       printf("   ");
       for(int j =0;j<n;j++){
           if(j==n-1 ||i ==n-1)
           printf("*");
           else 
           printf(" ");
       }
       printf("   ");
       for(int j =0;j<n;j++){
           if(j==0||i==n-1 || j==n-1)
           printf("*");
           else 
           printf(" ");
       }
       printf("   ");

       printf("   ");
       
       
       
       printf("\n");
       
       
       
   }
   
}
/*
#include<stdio.h>
int main() {
   int n = 11;
   for(int i=0 ;i<n ;i++){
    for(int j=0;j<n;j++){
      if(i==0 || j==0
       ||j==n-1 
       || i==n-1
       || i==j
       || i+j ==n-1)
     printf("*");
     else 
     printf(" ");
    }
    printf("\n");
   }
   
}
*/
