#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int candle;
    int max = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &candle);

        if (candle > max) {
            max = candle;
            count = 1;  
        } else if (candle == max) {
            count++; 
        }
    }

    printf("%d\n", count);
    return 0;
}
