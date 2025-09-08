#include <stdio.h>

int main(void) {
    char O;
    double M[12][12];
    scanf(" %c", &O);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    double soma = 0.0;
    int cont = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (j > i && j > 11 - i) { 
                soma += M[i][j];
                cont++;
            }
        }
    }

    if (O == 'S') {
        printf("%.1lf\n", soma);
    } else if (O == 'M') {
        printf("%.1lf\n", soma / cont);
    }

    return 0;
}
