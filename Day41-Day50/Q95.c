//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    char temp[2000];
    int i = 0;
    
    if (fgets(s1, sizeof(s1), stdin) == NULL)
        return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL)
        return 0;
    
    while (s1[i] != '\0' && s1[i] != '\n') {
        temp[i] = s1[i];
        i++;
    }
    int len1 = i;
    
    i = 0;
    while (s2[i] != '\0' && s2[i] != '\n') {
        temp[len1 + i] = s2[i];
        i++;
    }
    temp[len1 + i] = '\0';
    
    i = 0;
    while (temp[i] != '\0') {
        if (temp[i] == '\n') temp[i] = '\0';
        i++;
    }
    
    if (strstr(temp, s1) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}
