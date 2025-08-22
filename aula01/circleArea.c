#include <stdio.h>
 
int main() {
 
    double R;
    const double PI = 3.14159;
    double A;

    scanf("%lf", &R);

    A = (R*R) * PI;
    printf("A=%.4f\n", A);
 
    return 0;
}