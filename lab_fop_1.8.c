#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char *string1, char *string2, int n) {

    size_t len1 = strlen(string1);
    size_t len2 = strlen(string2);

    char *result = malloc(len1 + len2 + 1);

    if (!result) {
        fprintf(stderr, "error\n");
        return NULL;
    }

    memcpy(result, string1, len1);
    memcpy(result + len1, string2, n);

    return result;
}

int main() {
    // 2
    int n = 2;
    char *s = concat("first", "second", n);
    printf("%s\n", s);
    free(s);

    // 5
    char source1[10] = "first";
    char destination1[10];
    strcpy(destination1, source1);
    int i1 = 0;
    while (i1 < strlen(destination1)){
        printf("%c", destination1[i1]);
        i1++;
    }
    printf("\n");

    //6
    char source2[10] = "first";
    char destination2[10];
    strncpy(destination2,source2, n);
    int i2 = 0;
    while (i2 < n){
        printf("%c", destination2[i2]);
        i2 ++;
    }
    printf("\n");

    // 9
    char str[11] = "0163456769";
    int ch = '6';
    char *pch;
    pch = strrchr (str, '4');
    printf("%d", pch-str+1);

    return 0;
}

