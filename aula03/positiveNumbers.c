#include <stdio.h>
 
int main() {
 
    float number;
    int total = 0;

    for (int i=0; i < 6; i++){
        scanf("%f", &number);
        if (number > 0){
            total++;
        }
    }
    printf("%d valores positivos\n", total);

    return 0;
}