#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Average = %.2f\n", sum / n);

    free(arr);
    return 0;
}

