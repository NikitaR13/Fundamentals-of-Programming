#include <stdio.h>

int addition(int a, int b){
    return a + b;
}



int main() {
    FILE *file = fopen("path.txt", "w");
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    //int c = addition(a, b);
    fprintf(file, "The result of addition: %d", addition(a, b));
    fclose(file);
    return 0;
}
