#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (!isspace(str[i]) && (i == 0 || isspace(str[i-1]))) {
            count++;
        }
        i++;
    }

    printf("Word count: %d\n", count);

    return 0;
}

