#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string (no spaces): ");
    scanf("%s", str);

    while (str[i] != '\0') {
        length++;
        i++;
    }

    printf("Length: %d\n", length);

    return 0;
}

