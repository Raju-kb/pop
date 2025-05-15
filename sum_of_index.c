
#include <stdio.h>

int main() {
    int n ,even =0 ,odd=0,i;
    printf("enter the size\n");
    scanf("%d",&n);
    int a[n];
    
    for ( int i =0 ; i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even =even+a[i];
        if(a[i]%2!=0)
        odd = odd +a[i];
        
    }
    printf("EVEN %d\n",even);
    printf("ODD %d",odd);

    return 0;
}
