#include <stdio.h>
#include <math.h>

int main() {
    float A;
    float B;

    scanf("%f %f", &A, &B);
    
    int side_A = A;
    int side_B = B;
    int side_C = sqrt((side_B * side_B) - (side_A * side_A));
    
    int around = side_A + side_B + side_C;
    int wide = 0.5 * side_C * side_A;
    
    printf("Alas = %d cm\n", side_C);
    printf("Tinggi = %d cm\n", side_A);
    printf("Keliling = %d cm\n", around);
    printf("Luas = %d cm^2\n\n", wide);
    
    float A2;
    float B2;

    scanf("%f", &A2);
    scanf("%f", &B2);
    
    int side_A2 = A2;
    int side_B2 = B2;
    int side_C2 = sqrt((side_B2 * side_B2) - (side_A2 * side_A2));
    
    int around2 = side_A2 + side_B2 + side_C2;
    int wide2 = 0.5 * side_C2 * side_A2;
    
    printf("Alas = %d cm\n", side_C2);
    printf("Tinggi = %d cm\n", side_A2);
    printf("Keliling = %d cm\n", around2);
    printf("Luas = %d cm^2\n", wide2);
    return 0;
}