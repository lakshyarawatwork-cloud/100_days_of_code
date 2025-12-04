//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;
    int hasEven = 0;

    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven) {
        printf("%llu\n", product);
    } else {
        printf("0\n"); // No even numbers in range
    }

    return 0;
}
