#include <stdio.h>
#include <string.h>

int main(void) {
    const int leds_por_digito[10] = {
        6,
        2,
        5,
        5,
        4,
        5,
        6,
        3,
        7,
        6
    };

    int N;
    if (scanf("%d", &N) != 1) return 0;

    for (int i = 0; i < N; i++) {
        char v[105];
        if (scanf("%104s", v) != 1) return 0;

        int total = 0;
        for (size_t j = 0; v[j] != '\0'; j++) {
            char c = v[j];
            total += leds_por_digito[c - '0'];
        }

        printf("%d leds\n", total);
    }

    return 0;
}
