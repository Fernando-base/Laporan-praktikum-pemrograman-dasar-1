#include <stdio.h>

int main() {
    int Multiples;
    char Symbol;

    scanf("%d", &Multiples);
    scanf(" %c", &Symbol);

    for (int i = 1; i <= 50; i++) {
        if (i % Multiples == 0) {
            printf("%c ", Symbol);
        } else {
            printf("%d ", i);
        }
    }
        return 0;
}