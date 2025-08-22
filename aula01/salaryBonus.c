#include <stdio.h>
 
int main() {

    char NAME;
    double SALARY;
    double SALES;
    double FINAL_SALARY;

    scanf("%s", &NAME);
    scanf("%lf", &SALARY);
    scanf("%lf", &SALES);
    FINAL_SALARY = SALARY + (SALES * 0.15);
    
    printf("TOTAL = R$ %.2f\n", FINAL_SALARY);

    return 0;
}