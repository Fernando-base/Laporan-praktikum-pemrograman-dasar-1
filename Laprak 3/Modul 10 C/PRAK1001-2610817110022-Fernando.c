#include <stdio.h>

    int factorial(int f) {
        if (f == 0) {
            return 1;
        } else {
            return f * factorial(f - 1);
        }
    }
int main() {
    int f;
    scanf("%d", &f);
    printf("%d! = %d", f, factorial(f));
    return 0;
}