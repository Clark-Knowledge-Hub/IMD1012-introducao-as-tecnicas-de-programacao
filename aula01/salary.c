#include <stdio.h>
 
int main() {

    int NUMBER;
    int WORKED_HOURS;
    float HOUR_VALUE;
    float SALARY;

    scanf("%i", &NUMBER);
    scanf("%i", &WORKED_HOURS);
    scanf("%f", &HOUR_VALUE);
    SALARY = WORKED_HOURS * HOUR_VALUE;

    printf("NUMBER = %i\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}