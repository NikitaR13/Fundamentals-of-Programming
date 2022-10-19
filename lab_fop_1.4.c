#include <stdio.h>

int main() {
    int first;
    int second;
    int min = 21;
    int max = 45;
    int bit_value;

    scanf("%d", &first);
    printf("value %d is inside of range from %d to %d : %d \n", first, min, max, first >= min && first <= max);

    scanf("%d", &second);
    bit_value = (second >> 16) & 1;
    printf("%d", bit_value);
    return 0;
}
