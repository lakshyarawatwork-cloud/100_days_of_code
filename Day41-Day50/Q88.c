//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
