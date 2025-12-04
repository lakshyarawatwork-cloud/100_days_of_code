//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j, k;
    
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;
    
    while (str[i] != '\0' && str[i] != '\n') {
        j = i;
        while (str[j] != '\0' && str[j] != '\n') {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (j < strlen(str) - 1 && str[j+1] != '\n') {
                printf(",");
            }
            j++;
        }
        i++;
    }
    
    printf("\n");
    return 0;
}
