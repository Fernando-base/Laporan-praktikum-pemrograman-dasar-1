#include <stdio.h>

int main() {
    int army = 958730;
    int hero = 5;
    
    int total = army / hero;
    
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", army);
    printf("Jumlah pahlawan = %d\n", hero);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", total);
    
    return 0;
}