#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    printf("Matriks A\n");
    int matrix_a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    
    printf("Matriks B\n");
    int matrix_b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }
    
    int hasil[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            hasil[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                hasil[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    
    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", hasil[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}