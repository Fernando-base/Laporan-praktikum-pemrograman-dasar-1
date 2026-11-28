#include <stdio.h>

int main() {
    float first_number;
    float second_number;
    float total;

    printf("Masukkan Nilai Pertama : ");
        scanf("%f", &first_number);
    printf("Masukkan Nilai Kedua : ");
        scanf("%f", &second_number);

    total = first_number + second_number;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n\n", first_number, second_number, total);
    
    float number_1;
    float number_2;
    float sum;

    printf("Masukkan Nilai Pertama : ");
        scanf("%f", &number_1);
    printf("Masukkan Nilai Kedua : ");
        scanf("%f", &number_2);

    sum = number_1 + number_2;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", number_1, number_2, sum);

    return 0;
}