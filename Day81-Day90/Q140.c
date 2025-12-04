//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    scanf("%s", input);

    struct Person p;

    if (strcmp(input, "Gender=MALE") == 0) p.gender = MALE;
    else if (strcmp(input, "Gender=FEMALE") == 0) p.gender = FEMALE;

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
    }

    return 0;
}