#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char letter;
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == letter && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("The number of words beginning with '%c' is %d\n", letter, count);

    return 0;
}