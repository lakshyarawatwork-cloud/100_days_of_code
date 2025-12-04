//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j;
    char temp;

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("%s\n", str);

    return 0;
}
