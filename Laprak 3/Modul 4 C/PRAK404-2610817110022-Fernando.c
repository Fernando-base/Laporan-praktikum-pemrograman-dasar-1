#include <stdio.h>

int main() {
    int choice;
    float a, b;

    while (1) {
        printf("\nPilih Program\n");
        printf("1.Penjumlahan\n");
        printf("2.Pengurangan\n");
        printf("3.Perkalian\n");
        printf("4.Pembagian\n");
        printf("5.Exit\n");

        printf("Masukkan pilihan: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Masukkan Nilai Pertama: ");
            scanf("%f", &a);
            printf("Masukkan Nilai Kedua: ");
            scanf("%f", &b);
            printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f\n", a, b, a + b);
        } else if (choice == 2) {
            printf("Masukkan Nilai Pertama: ");
            scanf("%f", &a);
            printf("Masukkan Nilai Kedua: ");
            scanf("%f", &b);
            printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f\n", a, b, a - b);
        } else if (choice == 3) {
            printf("Masukkan Nilai Pertama: ");
            scanf("%f", &a);
            printf("Masukkan Nilai Kedua: ");
            scanf("%f", &b);
            printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f\n", a, b, a * b);
        } else if (choice == 4) {
            printf("Masukkan Nilai Pertama: ");
            scanf("%f", &a);
            printf("Masukkan Nilai Kedua: ");
            scanf("%f", &b);
            printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f\n", a, b, a / b);
        } else if (choice == 5) {
            printf("Terimakasih, telah menggunakan kalkulator NANDO\n");
            break;
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
    return 0;
}