#include <stdio.h>
#include <math.h>
enum embedded_operating_systems{
    Symbian = 1,
    Embedded_linux,
    Windows_CE,
    VxWorks,
    QNX
};
struct point{
    unsigned int b:4;
};

union printer {
    struct point p;
    struct {
        unsigned ready: 1;
        unsigned low_toner: 1;
        unsigned damaged_drum: 1;
        unsigned no_paper: 1;
    } byte;
};
typedef union printer example;

struct coord{
    float x;
    float y;
};



int main() {
    enum embedded_operating_systems a;
    a = Symbian;
    printf("%d\n",a);


    struct coord A = { 1, 1}; // две соседние вершины.
    struct coord B = { 3, 1};
    int per;
    per = sqrtf(powf(B.x - A.x, 2) + powf(B.y - A.y, 2)) * 4;
    printf("perimeter of the square is: %d\n", per);


    int x;
    scanf ("%x", &x);
    struct point oct = {x};
    union printer c;
    c.p = oct;
    printf("%d \t %d \t %d \t %d \n",
           c.byte.ready, c.byte.low_toner, c.byte.damaged_drum, c.byte.no_paper);


    return 0;
}

