/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int i, j, spaces, stars;

   
    for (i = 1; i <= 4; i++) {
        spaces = 4 - i;
        stars = 2 * i - 1;

        for (j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = 3; i >= 1; i--) {
        spaces = 4 - i;
        stars = 2 * i - 1;

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
