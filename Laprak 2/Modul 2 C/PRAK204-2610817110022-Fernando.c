#include <stdio.h>
#include <math.h>
#define PI 3.14285714

int main() {
    float radius;
    float height;
    float volume;
    float area;
    float circumference;

    printf("");
        scanf("%f", &radius);
    printf("");
        scanf("%f", &height);
        
    volume = PI * (radius * radius) * height;
    area =  2 * PI * radius * (radius + height);
    circumference = 2 * PI * radius;

    printf("Volume = %.2f\n", ceil(volume));
    printf("Luas = %.2f\n", ceil(area));
    printf("Keliling = %.2f\n\n", ceil(circumference));

    float radius2;
    float height2;
    float volume2;
    float area2;
    float circumference2;

    printf("");
        scanf("%f %f", &radius2, &height2);
  
    volume2 = PI * (radius2 * radius2) * height2;
    area2 =  2 * PI * radius2 * (radius2 + height2);
    circumference2 = 2 * PI * radius2;

    printf("Volume = %.2f\n", volume2);
    printf("Luas = %.2f\n", area2);
    printf("Keliling = %.2f\n", circumference2);

    return 0;
}