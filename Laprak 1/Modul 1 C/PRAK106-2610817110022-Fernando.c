#include <stdio.h>

int main() {
    
    int a = 4;
    int b = 8;
    int c = 3;

    int cek1 = (a == b);
    int cek2 = (b > c);
    int cek3 = (a != c);
    
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", cek1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", cek2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", cek3);
    
    return 0;
}