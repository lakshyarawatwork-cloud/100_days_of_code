//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k, i;
    int a[100], b[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < n; i++) {
        int newIndex = (i + k) % n;
        b[newIndex] = a[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d", b[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
