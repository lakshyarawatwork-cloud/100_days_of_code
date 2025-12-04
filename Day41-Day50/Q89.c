//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    int i = 0, count = 0;

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    scanf(" %c", &ch);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}
