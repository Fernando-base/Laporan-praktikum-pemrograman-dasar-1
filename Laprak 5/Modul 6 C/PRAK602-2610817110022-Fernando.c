#include <stdio.h>

int main() {
    int TotalRoom;
    scanf("%d", &TotalRoom);
    
    int Zetsu[TotalRoom];
    int Total[TotalRoom];
    for (int i = 0; i < TotalRoom; i++) {
        scanf("%d", &Zetsu[i]);
    }

    for (int i = 0; i < TotalRoom; i++) {
        int RoomZetsu = i + 1;
        Total[i] = Zetsu[i] * RoomZetsu;
    }

    for (int i = 0; i < TotalRoom; i++) {
        printf("%d", Total[i]);
        if (i < TotalRoom - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}