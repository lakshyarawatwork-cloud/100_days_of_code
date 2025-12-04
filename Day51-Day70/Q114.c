//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin) == NULL)
        return 0;

    int max_len = 0;
    int start = 0;
    int last_index[256];
    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }
    
    int len = strlen(s);
    if (len > 0 && s[len-1] == '\n') {
        s[len-1] = '\0';
        len--;
    }
    
    for (int i = 0; i < len; i++) {
        if (last_index[(int)s[i]] >= start) {
            start = last_index[(int)s[i]] + 1;
        }
        last_index[(int)s[i]] = i;
        if (i - start + 1 > max_len) {
            max_len = i - start + 1;
        }
    }
    
    printf("%d\n", max_len);
    return 0;
}
