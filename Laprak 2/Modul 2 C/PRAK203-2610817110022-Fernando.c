#include <stdio.h>

int main() {
    float a;
    float b;
    float i;
    float j;
    float x;
    float y;
    float total;

    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    total = (a - b) * i / j - (x + y);
    printf("%.3f\n\n", total);

    float a2;
    float b2;
    float i2;
    float j2;
    float x2;
    float y2;
    float total2;

    scanf("%f %f", &a2, &b2);
    scanf("%f %f", &i2, &j2);
    scanf("%f %f", &x2, &y2);

    total2 = (a2 - b2) * i2 / j2 - (x2 + y2);
    printf("%.3f", total2);

    return 0;
}