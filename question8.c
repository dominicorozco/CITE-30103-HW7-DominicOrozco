#include <stdio.h>

int main() {
    int n, num;
    int even = 0, odd = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even count = %d\n", even);
    printf("Odd count = %d\n", odd);

    return 0;
}

