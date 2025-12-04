//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, original, first, last, pow10 = 1, temp;
    
    printf("Enter any number\n");
    scanf("%d", &num);

    original = num;
    last = num % 10;

    while (num >= 10) {
        num /= 10;
        pow10 *= 10;
    }
    first = num;

    temp = original % pow10;
    temp = temp / 10;

    int swapped = last * pow10 + temp * 10 + first;

    printf("%d\n", swapped);

    return 0;
}
