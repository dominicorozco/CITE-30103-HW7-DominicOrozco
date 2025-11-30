#include <stdio.h>

long factorial(int n) {
    if (n < 0)
        return -1;  
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    long result = factorial(n);

    if (result == -1)
        printf("Error: factorial of a negative number is not defined.\n");
    else
        printf("Factorial = %ld\n", result);

    return 0;
}

