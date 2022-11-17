#include <stdio.h>

    int main(){
        printf("Введите размер массива\n");
        int n;
        scanf("%d", &n);
        printf("Введите массив\n");
        int array[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &array[i]);
        }

        for (int i = 0; i < n; ++i) {
            printf("%d ", array[i]);
        }
        printf("\n");

        // 2 задание

        int first_matrix[2][2];
        int second_matrix[2][2];
        int result_matrix[2][2];

        printf ("Введите первую строку первой матрицы\n");
        scanf("%d %d", &first_matrix[0][0], &first_matrix[0][1]);
        printf ("Введите вторую строку первой матрицы\n");
        scanf("%d %d", &first_matrix[1][0], &first_matrix[1][1]);

        printf ("Введите первую строку второй матрицы\n");
        scanf("%d %d", &second_matrix[0][0], &second_matrix[0][1]);
        printf ("Введите вторую строку второй матрицы\n");
        scanf("%d %d", &second_matrix[1][0], &second_matrix[1][1]);

        result_matrix[0][0] = first_matrix[0][0] * second_matrix[0][0] + first_matrix[0][1] * second_matrix[1][0];
        result_matrix[0][1] = first_matrix[0][0] * second_matrix[0][1] + first_matrix[0][1] * second_matrix[1][1];
        result_matrix[1][0] = first_matrix[1][0] * second_matrix[0][0] + first_matrix[1][1] * second_matrix[1][0];
        result_matrix[1][1] = first_matrix[1][0] * second_matrix[0][1] + first_matrix[1][1] * second_matrix[1][1];

        printf("%d %d\n", result_matrix[0][0], result_matrix[0][1]);
        printf("%d %d", result_matrix[1][0], result_matrix[1][1]);

    return 0;
    }
