#include <stdio.h>

int minimum_step(int n) {
    if (n == 1)
        return 1;
    return 2 * minimum_step(n - 1) + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Jumlah langkah minimum untuk %d cakram adalah %d\n", n, minimum_step(n));
    return 0;
}