#include <stdio.h>

int main() {
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    int odd;
    if (limit % 2 == 0) {
        odd = limit;
    } else {
        odd = limit - 1;
    }

    for (int i = odd; i > 1; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}