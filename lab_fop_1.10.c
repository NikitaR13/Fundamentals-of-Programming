#include <stdio.h>
int NOD (int a, int b){
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

int NOK (int a, int b){
    return (a * b) / NOD (a, b);
}

int Sum_of_Numbers(int x){
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

int Recursive_Sum(int x){
    int sum = 0;
    if (x > 10){
        sum += x % 10;
        return Recursive_Sum(x / 10);
    }
    return sum;
}

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("NOD = %d\n", NOD(a, b));
    printf("NOK = %d\n", NOK(a, b));

    // Ex 4
    int x;
    scanf("%d", &x);
    printf("%d", Sum_of_Numbers(x));
   // printf("%d", Recursive_Sum(x));


    return 0;
}

