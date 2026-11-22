#include <stdio.h>

struct wallet {
    char name[30];
    int balance;
};

void topup(struct wallet *c, int amount) {
    c->balance += amount;
    printf("Top up %d berhasil, saldo = %d\n", amount, c->balance);
}

void pay(struct wallet *c, int amount) {
    if (c->balance >= amount) {
        c->balance -= amount;
        printf("Bayar %d berhasil, saldo = %d\n", amount, c->balance);
    } else {
        printf("Bayar %d gagal, saldo tidak cukup\n", amount);
    }
}

int main() {
    struct wallet number_1;
    int transaction;
    
    scanf("%s %d", number_1.name, &number_1.balance);
    scanf("%d", &transaction);

    char type;
    int amount;
    for (int i = 0; i < transaction; i++) {
        scanf(" %c %d", &type, &amount);
        if (type == 'T') {
            topup(&number_1, amount);
        } else if (type == 'B') {
            pay(&number_1, amount);
        }
    }

    printf("Saldo akhir %s = %d\n", number_1.name, number_1.balance);

    return 0;
}