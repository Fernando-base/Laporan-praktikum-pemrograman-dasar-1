#include <stdio.h>

int main() {
for (int i = 1; i <= 5; i++) {
    int total;
    scanf("%d", &total);

    int second = total % 60;
    total /= 60;
    int minute = total % 60;
    total /= 60;
    int hour = total % 24;
    int day = total / 24;

    if (day > 0) {
        printf("%d hari %02d:%02d:%02d\n", day, hour, minute, second);
    } else {
        printf("%02d:%02d:%02d\n", hour, minute, second);
    }
}
    return 0;
}