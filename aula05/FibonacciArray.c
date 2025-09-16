#include <stdio.h>
 
int main() {
    
    int T, N, i, j;
    long long int fibonacci[61] = {[0] = 0, [1] = 1};

    for (j = 2; j <= 60; j++){
        fibonacci[j] = fibonacci[j - 1] + fibonacci[j - 2];
    };

    scanf("%d", &T);

    for (i = 0; i < T; i++){
        scanf("%d", &N);
        printf("Fib(%d) = %lld\n", N, fibonacci[N]);
    }
    
    return 0;
}