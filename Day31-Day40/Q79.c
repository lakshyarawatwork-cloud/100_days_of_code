//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];
    int i, j;
    int dir = 1;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int r = 0, c = 0;
    int total = rows * cols;
    int printed = 0;

    while (printed < total) {
        printf("%d", a[r][c]);
        printed++;
        if (printed < total) printf(" ");

        if (dir == 1) {
            if (c == cols - 1) {
                r++;
                dir = -1;
            } else if (r == 0) {
                c++;
                dir = -1;
            } else {
                r--;
                c++;
            }
        } else {
            if (r == rows - 1) {
                c++;
                dir = 1;
            } else if (c == 0) {
                r++;
                dir = 1;
            } else {
                r++;
                c--;
            }
        }
    }

    printf("\n");

    return 0;
}
