#include <stdio.h>
#include <math.h>

int main(void) {
    double N;
    scanf("%lf", &N);

    int valor = (int)round(N * 100);

    int notas[]  = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = valor / notas[i];
        valor %= notas[i];
        printf("%d nota(s) de R$ %.2f\n", qtd, notas[i] / 100.0);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = valor / moedas[i];
        valor %= moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd, moedas[i] / 100.0);
    }

    return 0;
}
