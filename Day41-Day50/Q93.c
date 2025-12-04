//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int freq[26] = {0};
    int i = 0;

    if (fgets(s1, sizeof(s1), stdin) == NULL)
        return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL)
        return 0;

    while (s1[i] != '\0' && s1[i] != '\n') {
        freq[s1[i] - 'a']++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0' && s2[i] != '\n') {
        freq[s2[i] - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
