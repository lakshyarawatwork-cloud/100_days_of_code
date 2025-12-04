//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i = 0;
    char ch;

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("%c\n", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
        i++;
    }

    return 0;
}
