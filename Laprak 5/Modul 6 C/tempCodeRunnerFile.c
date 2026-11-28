#include <stdio.h>
#include <string.h>

int main() {
    char code[1005];
    char message[1005];
    
    fgets(code, sizeof(code), stdin);
    code[strcspn(code, "\n")] = 0;
    
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0;
    
    int len_code = strlen(code);
    int len_message = strlen(message);
    
    if (len_code != len_message) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    } else {
        char total[len_code + 1];
        for (int i = 0; i < len_code; i++) {
            if (message[i] == code[i]) {
                total[i] = '*';
            } else {
                total[i] = '#';
            }
        }
        total[len_code] = '\0';
        
        printf("%s\n", total);
        
        int total_star = 0;
        int total_kres = 0;
        
        for (int i = 0; i < len_code; i++) {
            if (total[i] == '*') {
                total_star++;
            } else if (total[i] == '#') {
                total_kres++;
            }
        }
        
        printf("* = %d\n", total_star);
        printf("# = %d\n", total_kres);
        
        if (total_star >= total_kres) {
            printf("Pesan asli\n");
        } else {
            printf("Pesan palsu\n");
        }
    }
    
    return 0;
}