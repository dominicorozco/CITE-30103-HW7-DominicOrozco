#include <stdio.h>

int main() {
    char s[100];
    int i, len = 0, isPal = 1;

    printf("Enter a word: ");
    scanf("%s", s);

    while (s[len] != '\0') len++;

    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            isPal = 0;
            break;
        }
    }

    if (isPal)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

