#include <stdio.h>

int main() {
    float number_1;


    for (int i = 1; i <= 5; i++) {
        printf("");
        
        scanf("%f", &number_1);

        if (number_1 >= 80) {
            printf("A\n");
        } 
        else if (number_1 >= 70) {
            printf("B\n");
        } 
        else if (number_1 >= 60) {
            printf("C\n");
        } 
        else if (number_1 >= 50) {
            printf("D\n");
        } 
        else {
            printf("E\n");
        }
        
        printf("\n"); 
    }

    return 0;
}
