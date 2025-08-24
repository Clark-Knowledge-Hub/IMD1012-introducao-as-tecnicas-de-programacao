#include <stdio.h>
 
int main() {

    int X;
    int Y;
    float TOTAL = 0;

    scanf("%i", &X);
    scanf("%i", &Y);

    if (X == 1){
        TOTAL = 4.00 * Y;
    } else if (X == 2){
        TOTAL = 4.50 * Y;
    } else if (X == 3){
        TOTAL = 5.00 * Y;
    } else if (X == 4){
        TOTAL = 2.00 * Y;
    } else if (X == 5){
        TOTAL = 1.50 * Y;
    } else {
        printf("valor inválido");
    }

    printf("Total: R$ %.2f\n", TOTAL);
 
    return 0;
}