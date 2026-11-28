#include <stdio.h>
#include <math.h>

int main() {
    int base = 5;
    int high = 12;
    
    int side_A = high;
    int side_C = base;
    int side_B = sqrt((side_A * side_A) + (side_C * side_C));
    
    int around = side_A + side_B + side_C;
    int wide = 0.5 * base * high;
    
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n\n", high);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", side_A);
    printf("Sisi B = %d cm\n", side_B);
    printf("Sisi C = %d cm\n", side_C);
    printf("Keliling = %d cm\n", around);
    printf("Luas = %d cm\n", wide);
    
    return 0;
}