#include <stdio.h>

struct ParticipantData {
    char name[30];
    int age;
    int score;
};

int main() {
    struct ParticipantData Number_1;

    printf("Nama : ");
    scanf(" %29[^\n]", Number_1.name);
    printf("Umur : ");
    scanf("%d", &Number_1.age);
    printf("Skor : ");
    scanf("%d", &Number_1.score);

    printf("\n");
    printf("Data Peserta:\n");
    printf("Nama : %s\n", Number_1.name);
    printf("Umur : %d tahun\n", Number_1.age);
    printf("Skor : %d\n", Number_1.score); 

    return 0;
}