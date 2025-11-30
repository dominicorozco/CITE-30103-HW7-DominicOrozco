#include <stdio.h>

int main() {
    int n, arr[100];
    int sum = 0;
    double avg;

    printf("Enter number of integers (max 100): ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (double)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

