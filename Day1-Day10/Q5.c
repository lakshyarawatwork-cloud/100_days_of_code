//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the temperature :\n");
    scanf("%f",&a);
    b=a*9/5+32;
    printf("Fahrenheit = %f",b);
    return 0;
    
}