#include <stdio.h>

struct ParticipantData {
    char name[30];
    int age;
    int score;
};

int main() {
    int participant;
    scanf("%d", &participant);

    struct ParticipantData totalparticipant[10];
    
    for (int i = 0; i < participant; i++) {
        scanf("%s %d %d", totalparticipant[i].name, &totalparticipant[i].age, &totalparticipant[i].score);
    }
    
    int index = 0;

    for (int i = 1; i < participant; i++) {
        if (totalparticipant[i].score > totalparticipant[index].score) {
            index = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n", totalparticipant[index].name, totalparticipant[index].score);

    return 0;
} 