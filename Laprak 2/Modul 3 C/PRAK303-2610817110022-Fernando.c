#include <stdio.h>

int main() {
    float number_1;


    for (int i = 1; i <= 3; i++) {
        printf("");
        
        scanf("%f", &number_1);

        if (number_1 >= 1) {
            printf("positif\n");
        } 
        else if (number_1 < 0) {
            printf("negatif\n");
        } 
        else {
            printf("nol\n");
        }
        
        printf("\n"); 
    }

    return 0;
}
