#include <stdio.h>

int main() {
    char name[50];
    char student_number[50];
    char paralel_class[50];
    char birth[50];
    char address[50];
    char hobby[50];
    char phone_number[50];

    printf("Nama                                : ");
      scanf(" %[^\n]", name);
    printf("NIM                                 : ");
      scanf(" %[^\n]", student_number);
    printf("Kelas Paralel                       : ");
      scanf(" %[^\n]", paralel_class);
    printf("Tempat/Tanggal Lahir                : ");
      scanf(" %[^\n]", birth);
    printf("Alamat                              : ");
      scanf(" %[^\n]", address);
    printf("Hobby                               : ");
      scanf(" %[^\n]", hobby);
    printf("No.HP                               : ");
      scanf(" %[^\n]", phone_number);

    printf("\nNama                                : %s\n", name);
    printf("NIM                                 : %s\n", student_number);
    printf("Kelas Paralel                       : %s\n", paralel_class);
    printf("Tempat/Tanggal Lahir                : %s\n", birth);
    printf("Alamat                              : %s\n", address);
    printf("Hobby                               : %s\n", hobby);
    printf("No.HP                               : %s\n", phone_number);

    return 0;
}