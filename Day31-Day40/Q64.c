//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int freq[10] = {0};
    if(n == 0) freq[0]++;

    while(n > 0) {
        int d = n % 10;
        freq[d]++;
        n /= 10;
    }

    int maxDigit = 0;
    for(int i = 1; i < 10; i++)
        if(freq[i] > freq[maxDigit])
            maxDigit = i;

    printf("%d", maxDigit);

    return 0;
}
