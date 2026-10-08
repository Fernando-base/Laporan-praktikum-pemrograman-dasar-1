#include <stdio.h>

int main() {
    float number_1;


    for (int i = 1; i <= 5; i++) {
        printf("");
        
        scanf("%f", &number_1);

        if (number_1 > 99) {
            printf("Anda Menginput Melebihi Limit Bilangan\n");
        } 
        else if (11 > number_1 && number_1 >= 1) {
            printf("satuan\n");
        } 
        else if (20 > number_1 && number_1 >= 11) {
            printf("belasan\n");
        }
        else if (number_1 >= 20) {
            printf("puluhan\n");
        }
        else {
            printf("nol\n");
        }
        
        printf("\n"); 
    }

    return 0;
}
