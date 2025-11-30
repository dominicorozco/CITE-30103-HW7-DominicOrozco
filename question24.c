#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int (*funcPtr)(int);   
    funcPtr = square;      

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = funcPtr(num);
    printf("Square = %d\n", result);

    return 0;
}

