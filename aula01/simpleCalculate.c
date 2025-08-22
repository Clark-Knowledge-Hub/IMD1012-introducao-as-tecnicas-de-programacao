#include <stdio.h>

int main() {
    int CODIGO_PRODUTO_1, QNT_UNIDADES_1;
    double PRECO_UNIDADE_1;

    int CODIGO_PRODUTO_2, QNT_UNIDADES_2;
    double PRECO_UNIDADE_2;

    double TOTAL_A_PAGAR;

    scanf("%d %d %lf", &CODIGO_PRODUTO_1, &QNT_UNIDADES_1, &PRECO_UNIDADE_1);
    scanf("%d %d %lf", &CODIGO_PRODUTO_2, &QNT_UNIDADES_2, &PRECO_UNIDADE_2);
    TOTAL_A_PAGAR = (QNT_UNIDADES_1 * PRECO_UNIDADE_1) + (QNT_UNIDADES_2 * PRECO_UNIDADE_2);

    printf("VALOR A PAGAR: R$ %.2f\n", TOTAL_A_PAGAR);

    return 0;
}