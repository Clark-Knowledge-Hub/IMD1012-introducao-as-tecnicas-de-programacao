#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char str[55];
    int shift;

    for (int t = 0; t < N; t++) {
        scanf("%s", str);
        scanf("%d", &shift);

        int len = strlen(str);
        for (int i = 0; i < len; i++) {
            char c = str[i];
            char dec = c - shift;
            if (dec < 'A') {
                dec = dec + 26;
            }
            str[i] = dec;
        }

        printf("%s\n", str);
    }

    return 0;
}
