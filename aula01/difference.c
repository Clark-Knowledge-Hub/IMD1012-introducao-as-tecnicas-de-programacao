#include <stdio.h>
 
int main() {

    int A;
    int B;
    int C;
    int D;
    int RESULT;

    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);
    RESULT = (A * B - C * D);

    printf("DIFERENCA = %i\n", RESULT);
 
    return 0;
}