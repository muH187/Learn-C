#include<stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter the operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter nubmer 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %.2lf", result);
            break;
        default:
            printf("Please enter valid operator!");
            break;
    }

    return 0;
}