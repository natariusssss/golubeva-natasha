#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#define DOG
int main() {
    int b1 = 0, b3 = 0;
    #ifdef DOG
    puts("hru!");
    #endif
    scanf("%d%d", &b1, &b3);
    int b2 = 0;
    b2 = sqrt(b1 * b3);
    int q = 0;
    q = b2 / b1;
    printf("%d %d", b2, q);
    return 0;
}