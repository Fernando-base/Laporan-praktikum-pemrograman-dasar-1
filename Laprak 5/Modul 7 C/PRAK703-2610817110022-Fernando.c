#include <stdio.h>

int main() {
    char word[100];
    printf("Kalimat: ");
    scanf("%[^\n]s", word);

    int jumlah_vokal = 0;
    int jumlah_konsonan = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        char ch = word[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                jumlah_vokal++;
            } else {
                jumlah_konsonan++;
            }
        }
    }
    printf("Jumlah Vokal: %d\n", jumlah_vokal);
    printf("Jumlah Konsonan: %d\n", jumlah_konsonan);
    return 0;
}