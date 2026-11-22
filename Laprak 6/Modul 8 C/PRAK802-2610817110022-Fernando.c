#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int andi;
    int budi;
    scanf("%d %d", &andi, &budi);

    int* ptr = &andi;
    int* ptr2 = &budi;

    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", andi, budi);

    swap(&andi, &budi);

    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", *ptr, *ptr2);

    return 0;
}