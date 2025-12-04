//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j;

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not palindrome\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome\n");
    return 0;
}
