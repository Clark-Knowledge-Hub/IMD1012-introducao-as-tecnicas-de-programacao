#include <stdio.h>
 
int main() {
 
    int number;
    int highest = 0;
    int position = 0;

    for (int i = 1; i <= 100; i++){
        scanf("%d", &number);
        if (number > highest) {
            highest = number;
            position = i;
        }
    }

    printf("%d\n", highest);
    printf("%d\n", position);

 
    return 0;
}