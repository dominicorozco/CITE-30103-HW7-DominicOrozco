#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0;
    int i = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char c = str[i];

        if (c >= '0' && c <= '9') digits++;
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            char lower = (c >= 'A' && c <= 'Z') ? c + 32 : c; 
            if (lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}
