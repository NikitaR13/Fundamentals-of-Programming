#include <stdio.h>
#include "triangle.h"

int main() {
    int a1, a2, b1, b2, c1, c2;
    printf("Hello, World!\n");
    scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);
    struct Triangle x = {a1, a2, b1, b2, c1, c2};
    CalcSquare(&x);

    printf("Square = %d", x.square);
    return 0;
}
