//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, first_word = 1, last_space = 0;
    
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;
    
    // Print initials for first two words
    while (str[i] != '\0' && str[i] != '\n') {
        if (first_word) {
            printf("%c.", str[i]);
            first_word = 0;
            while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') i++;
        } else if (str[i] == ' ') {
            i++;
            if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
                printf("%c.", str[i]);
                last_space = i;
                while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') i++;
            }
        } else {
            i++;
        }
    }
    
    // Print surname in full (everything after last space)
    if (last_space > 0) {
        printf(" ");
        i = last_space + 1;
        while (str[i] != '\0' && str[i] != '\n') {
            printf("%c", str[i]);
            i++;
        }
    }
    
    printf("\n");
    return 0;
}
 