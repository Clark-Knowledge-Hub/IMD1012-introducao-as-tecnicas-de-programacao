#include <stdio.h>
 
int main() {

    int X[10];
    int i, num;

    for(i = 0; i < 10; i++){
        scanf("%d", &num);

        if (num > 0){
            X[i] = num;
        } else {
            X[i] = 1;
        };

        printf("X[%d] = %d\n", i, X[i]);
    };

    return 0;
}