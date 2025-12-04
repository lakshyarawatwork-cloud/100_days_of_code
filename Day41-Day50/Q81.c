//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, count = 0;

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    while (str[i] != '\0' && str[i] != '\n') {
        count++;
        i++;
    }

    printf("%d\n", count);

    return 0;
}
