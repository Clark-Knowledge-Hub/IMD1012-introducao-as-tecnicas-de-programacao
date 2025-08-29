#include <stdio.h>
 
int main() {
 
    float number;
    int total = 0;
    float avarage = 0.0;

    for (int i=0; i < 6; i++){
        scanf("%f", &number);
        if (number > 0){
            total++;
            avarage = avarage + number;
        }
    }
    printf("%d valores positivos\n", total);
    printf("%.1f\n", (avarage) / total);

    return 0;
}