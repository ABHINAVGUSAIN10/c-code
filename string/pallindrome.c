#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev_str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    strcpy(rev_str, str);
    strrev(rev_str);

    for (i = 0; i < len; i++) {
        if (str[i] != rev_str[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("%s is not a palindrome.\n", str);
    } else {
        printf("%s is a palindrome.\n", str);
    }

    return 0;
}