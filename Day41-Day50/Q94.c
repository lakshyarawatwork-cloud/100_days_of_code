//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char str[1000];
    char longest[1000];
    int max_len = 0;
    int i = 0, j = 0, curr_len = 0;
    
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;
    
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            if (curr_len > max_len) {
                max_len = curr_len;
                for (j = 0; j < curr_len; j++) {
                    longest[j] = str[i - curr_len + j];
                }
                longest[curr_len] = '\0';
            }
            curr_len = 0;
        } else {
            curr_len++;
        }
        i++;
    }
    
    if (curr_len > max_len) {
        max_len = curr_len;
        for (j = 0; j < curr_len; j++) {
            longest[j] = str[i - curr_len + j];
        }
        longest[curr_len] = '\0';
    }
    
    printf("%s\n", longest);
    
    return 0;
}
