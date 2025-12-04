//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100], t[100][100];
    int i, j;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            t[j][i] = a[i][j];
        }
    }

    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d", t[i][j]);
            if (j != rows - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
