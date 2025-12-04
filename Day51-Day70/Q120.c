//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    int i = 0;
    int new_word = 1;

    while (str[i] != '\0' && str[i] != '\n') {
        if (isspace(str[i])) {
            putchar(str[i]);
            new_word = 1;
        } else {
            if (new_word && isalpha(str[i])) {
                putchar(toupper(str[i]));
                new_word = 0;
            } else {
                putchar(tolower(str[i]));
                new_word = 0;
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}
