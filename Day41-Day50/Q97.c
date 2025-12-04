//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    // Print first character as initial
    printf("%c.", str[0]);
    
    // Print initials after spaces
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            i++;
            if (str[i] != '\n' && str[i] != '\0') {
                printf("%c.", str[i]);
            }
        }
        i++;
    }
    
    printf("\n");
    return 0;
}
