#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0,m=0;
    scanf("%d",&n);
   int mat[n][n];
    for(int i= 0;i<n ;i++){
        for(int j =0;j<n ;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i= 0;i<n ;i++){
        
        for(int j =0;j<n ;j++){
            if(i==j ){
            sum +=mat[i][j];}
              if(i+j==n-1 ){
            m +=mat[i][j];}
        }


    }

    int diff = abs(sum-m);
    printf("%d",diff);

    return 0;
}
