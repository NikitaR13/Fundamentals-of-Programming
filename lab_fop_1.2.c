#include <stdio.h>
#include <math.h>
float fun_z1 (int x, float z1){
    z1=(powf(x, 2) + 2 * x - 3 + (x + 1) * sqrtf(powf(x, 2) - 9)) /
    (powf(x, 2) - 2 * x - 3 + (x - 1) * sqrtf(powf(x, 2) - 9));
    return (z1);
}

float fun_z2 (int x, float z2){
    z2=sqrtf((x + 3) / (x - 3));
    return (z2);
}

int main(){
    float x;
    float z1;
    float z2;
    printf("Введите параметр x:");
    scanf("%f",&x);
    if ((powf(x,2)-2*x-3+(x-1)*sqrtf(powf(x,2)-9))==0){
        printf ("Z1: Деление на ноль!\n");
    }
    else if ((powf(x,2)-9)<0){
        printf ("Z1: Квадратный корень из отрицательного числа\n");
    }
    else{
        printf("Z1: %f\n",fun_z1(x,z1));
    }

    if (((x+3)/(x-3))<0){
        printf("Z2: Квадратный корень из отрицательного числа\n");
    }
    else if (x==3){
        printf ("Z2: деление на ноль!");
    }
    else{
        printf("Z2: %f\n",fun_z2(x,z2));
    }
}
