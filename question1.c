#include <stdio.h>

float toCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

int main(void) {
    float f;
    printf("Enter the fahrenheit: ");
    scanf("%f", &f);

    float c = toCelsius(f);
    printf("Celsius: %.2f\n", c);

    return 0;
}

