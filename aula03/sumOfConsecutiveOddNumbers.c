#include <stdio.h>
 
int main() {
 
    int X;
    int Y;
    int TOTAL = 0;

    int HIGHER = 0;
    int LOWER = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X > Y){
        HIGHER = X;
        LOWER = Y;
    } else {
        HIGHER = Y;
        LOWER = X;
    }

    for (int i = LOWER + 1; i < HIGHER; i++){
        if (i % 2 != 0){
            TOTAL = TOTAL + i;
        }
    }

    printf("%d\n", TOTAL);

    return 0;
}