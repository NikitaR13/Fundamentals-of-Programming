#include <stdio.h>

long long FibRec(int n)
{
    if(n<1) {
        return 0;
    }
    if(n<2) {
        return 1;
    }
    return FibRec(n-2)+FibRec(n-1);
}

long long fibiter(int n){
    long long fib0 = 0;
    long long fib1 = 1;
    long long fib;
    for (int i = 1; i < n; ++i){
        fib = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib;
    }
    return fib;
}

int main() {
    long long x1 = fibiter(1000);
    long long x2 = FibRec(1000);
    printf("%lli\n", x1);
    printf("%lli", x2);
    return 0;
}
