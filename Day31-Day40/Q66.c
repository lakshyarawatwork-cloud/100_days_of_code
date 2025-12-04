//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, x, i, j;
    scanf("%d", &n);
    int a[n+1];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(a[i] > x) break;
    }

    for(j = n; j > i; j--)
        a[j] = a[j-1];

    a[i] = x;

    for(i = 0; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
