#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char reversedWord[100];
    
    scanf("%s", word);
    
    int length = strlen(word);
    
    for (int i = 0; i < length; i++) {
        reversedWord[i] = word[length - 1 - i];
    }
    reversedWord[length] = '\0';
    
    if (strcmp(word, reversedWord) == 0) {
        printf("Kata '%s' adalah palindrom\n", word);
    } else {
        printf("Kata '%s' bukan palindrom\n", word);
    }
    
    return 0;
}