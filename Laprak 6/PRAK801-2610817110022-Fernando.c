#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int* ptr = &number;

    printf("Nilai Variabel = %d\n", number);
    printf("Alamat Variabel = %p\n", &number);
    printf("Nilai Melalui Pointer = %d\n", *ptr);

    *ptr = *ptr * 2;
    printf("Nilai Setelah Diubah Lewat Pointer = %d\n", number);

    return 0;
}