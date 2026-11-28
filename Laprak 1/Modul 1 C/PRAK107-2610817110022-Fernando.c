#include <stdio.h>

int main() {
    int a = 4;
    int b = 5;
    int c = 7;
    int total_per_meter = 85000;
    
    int around = a + b + c;
    int total_cost = around * total_per_meter;
    
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", around);
    printf("Harga tanah Per Meter adalah %d\n", total_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_cost);
    
    return 0;
}