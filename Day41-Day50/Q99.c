//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    char months[13][4] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                         "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;
    
    // Print day part (dd-)
    while (str[i] != '/' && str[i] != '\0' && str[i] != '\n') {
        printf("%c", str[i]);
        i++;
    }
    printf("-");
    i++; // Skip first '/'
    
    // Extract month number
    int month = 0;
    int digit = 1;
    while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0' && str[i] != '\n') {
        month = month * 10 + (str[i] - '0');
        i++;
        digit--;
        if (digit == 0) break;
    }
    i++; // Skip second '/'
    
    // Print month name
    printf("%s-", months[month]);
    
    // Print year
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c", str[i]);
        i++;
    }
    
    printf("\n");
    return 0;
}
