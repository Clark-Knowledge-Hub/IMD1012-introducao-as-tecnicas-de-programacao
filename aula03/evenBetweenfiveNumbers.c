#include <stdio.h>
#include <math.h>
 
int main() {
 
    float number;
    int total = 0;

    for (int i=0; i < 5; i++){
        scanf("%f", &number);
        if (fmod(number, 2.0) == 0.0) {
            total++;
        }
    }
    printf("%d valores pares\n", total);

    return 0;
}