/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int i, j, spaces, stars;

    for (i = 0; i < 5; i++) {
        spaces = i;
        stars = 5 - i;

        for (j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
