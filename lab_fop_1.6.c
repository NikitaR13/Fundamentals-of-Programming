#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[4];
    int *m = array;
    for(int i = 0; i < 4; i++){
        scanf("%d",&array[i]);
    }
    for(int i = 0;i < 4; i++) {
        printf("%d\n", *(m + i));
    }



    int *ptr;
    int a;
    scanf("%d",&a);
    ptr = malloc(a * sizeof(*ptr));

    for(int i = 0; i < a; i++) {
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < a; i++){
        printf("%d\n", ptr[i]);

    }
    free(ptr);
    return 0;
}