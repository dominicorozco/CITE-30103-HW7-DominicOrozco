#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];

    printf("Enter matrix A (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("\nMatrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", B[i][j]);
        printf("\n");
    }

    printf("\nMatrix C (A+B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", C[i][j]);
        printf("\n");
    }

    return 0;
}


