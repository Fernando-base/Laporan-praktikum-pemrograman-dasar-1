#include <stdio.h>

int main() {
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int row1[n1];
        int row2[n2];
        int hasil[n1];
        
        for (int i = 0; i < n1; i++) {
            scanf("%d", &row1[i]);
        }
        
        for (int i = 0; i < n2; i++) {
            scanf("%d", &row2[i]);
        }
        
        for (int i = 0; i < n1; i++) {
            hasil[i] = row1[i] * row2[i];
        }
        
        for (int i = 0; i < n1; i++) {
            printf("%d", hasil[i]);
            if (i < n1 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}