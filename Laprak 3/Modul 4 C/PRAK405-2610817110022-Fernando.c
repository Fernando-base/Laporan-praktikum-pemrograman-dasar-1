#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int total = 0;

    for (int i = 1; i <= a; i++) {
        int total_line = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, b);
            if (j > 1) {
                printf(" + ");
            }
            total_line += j * b;
        }
        printf(" = %d\n", total_line);
        total += total_line;
    }

    printf("%d\n", total);
    return 0;
}