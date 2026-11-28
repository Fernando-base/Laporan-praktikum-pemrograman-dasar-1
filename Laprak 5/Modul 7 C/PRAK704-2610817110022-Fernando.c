#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    scanf("%[^\n]s", word);

    if (strlen(word) >= 20) {
        word[20] = '.';
        word[21] = '.';
        word[22] = '.';
        word[23] = '\0';
    }
    printf("%s\n", word);
    return 0;
}