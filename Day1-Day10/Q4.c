//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the radius of circle :\n");
    scanf("%d",&a);
    b=3.14*a*a;
    printf("Area of Circle is : %d\n",b);
    b=2*3.14*a;
    printf("circumference of Circle is : %d\n",b);
    return 0;
}