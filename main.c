#include <stdio.h>

int main() {
    int numbers = 0;
    int High = 0;
    int Low = 0;
    char str[100] = {'\0'};

    fgets(str,100, stdin);
    for ( int i = 0; i < sizeof(str) - 1; ++i){
        if (str[i] >= '0' && str[i] <= '9'){
            numbers += 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            High +=1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
            Low +=1;
    }
    printf("Num = %d; High = %d; Low = %d\n", numbers, High, Low);

    // Ex 4
    int input;
    scanf("%d", &input);
    for (int i = 2; i <= input / 1; ++i){
        printf("%d\n", i);
    }


    return 0;
}


