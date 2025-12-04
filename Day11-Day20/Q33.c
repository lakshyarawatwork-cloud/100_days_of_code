//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    int sum = 0;
    
    printf("Enter any number\n");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digits++;
        num /= 10;
    }

    num = original;

    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, digits);
        num /= 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}


