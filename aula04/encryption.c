#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    int N;
    if (scanf("%d%*c", &N) != 1) return 0;

    char s[1005];
    for (int t = 0; t < N; t++) {
        if (!fgets(s, sizeof(s), stdin)) return 0;

        size_t len = strlen(s);
        if (len && s[len - 1] == '\n') s[--len] = '\0';

        for (size_t i = 0; i < len; i++) {
            if (isalpha((unsigned char)s[i])) s[i] += 3;
        }

        for (size_t i = 0, j = len ? len - 1 : 0; i < j; i++, j--) {
            char tmp = s[i]; s[i] = s[j]; s[j] = tmp;
        }

        for (size_t i = len / 2; i < len; i++) {
            s[i] -= 1;
        }

        printf("%s\n", s);
    }
    return 0;
}
