#include <stdio.h>

int main() {
    float round = 5;
    float distance = 14;
    float phi = 3.14;
    
    float around = distance / round;
    float radius = around / (2 * phi);
    
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", round);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", distance);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", radius);
    
    return 0;
}