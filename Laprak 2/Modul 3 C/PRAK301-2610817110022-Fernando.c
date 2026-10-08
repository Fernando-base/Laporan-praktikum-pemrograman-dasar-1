#include <stdio.h>

int main() {
    // input ke-1

    int number_1;
    int number_2;

    scanf("%d %d", &number_1, &number_2);

    if (number_1 > number_2) {
        printf("%d %d\n\n", number_2, number_1);
    } else {
        printf("%d %d\n\n", number_1, number_2);
    }

    // input ke-2

    int number_3;
    int number_4;

    scanf("%d %d", &number_3, &number_4);

    if (number_3 > number_4) {
        printf("%d %d\n\n", number_4, number_3);
    } else {
        printf("%d %d\n\n", number_3, number_4);
    }

    // input ke-3

    int number_5;
    int number_6;

    scanf("%d %d", &number_5, &number_6);

    if (number_5 > number_6) {
        printf("%d %d", number_6, number_5);
    } else {
        printf("%d %d", number_5, number_6);
    }
        return 0;
}