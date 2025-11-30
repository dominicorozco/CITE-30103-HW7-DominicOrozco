#include <stdio.h>

int main() {
    int arr[10];
    int largest, smallest;

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    largest = smallest = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}

