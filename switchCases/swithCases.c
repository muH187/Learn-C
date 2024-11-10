#include<stdio.h>

int main() {

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade) {
        case 'A':
            printf("Perfect!");
            break;
        case 'B':
            printf("You did excellent!");
            break;
        case 'C':
            printf("You did good!");
            break;
        case 'D':
            printf("You did okay!");
            break;
        case 'F':
            printf("You are failed!");
            break;
        default:
            printf("Please enter only valid grade!");
    }

    return 0;
}