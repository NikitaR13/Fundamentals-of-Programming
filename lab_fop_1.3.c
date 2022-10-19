#include <stdio.h>

int main() {
    int a;
    int b;
    scanf ("%o", &a);
    scanf ("%x", &b);
    
    printf ("Задания 1,2:\n");
    printf ("%d\n", a);

    printf ("Задание 3:\n");
    printf ("%x\n", a);
    printf ("%x\n", a >> 4);

    printf ("Задание 4:\n");
    printf ("%x\n", a );
    printf ("%x\n", ~ a );

    printf ("Задание 5:\n");
    printf ("%x", a&&b);
    return 0;
}
