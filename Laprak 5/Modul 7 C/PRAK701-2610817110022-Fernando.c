#include <stdio.h>
#include <string.h>

int main() {
    char FirstName[100], SecondName[100];
    
    printf("Nama Depan: ");
    scanf(" %s", FirstName);
    
    printf("Nama Belakang: ");
    scanf(" %s", SecondName);
    
    int len1 = strlen(FirstName);
    int len2 = strlen(SecondName);
    
    printf("Nama Lengkap: %s %s\n", FirstName, SecondName);
    printf("Panjang Nama (Tanpa Spasi): %d\n", len1 + len2);
    
    return 0;
}