#include <stdio.h>

    int total_addition(int n) {
        if(n == 0) {
            return 0;
        } 
        return (n % 10) + total_addition(n / 10); 
    }
int main() {
    int number;
    int total;

    scanf("%d", &number);

    if(number == 0) {
        total = 0;
    } else {
        total = total_addition(number);
    }
    printf("Jumlah digit dari %d adalah %d", number, total);

    return 0;
}