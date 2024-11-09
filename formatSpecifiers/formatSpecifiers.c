#include<stdio.h>

int main() {

    float item1 = 5.75;
    float item2 = 10.99;
    float item3 = 53.99;

    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.2f\n", item3);

    const float PI = 3.14159; 

    printf("%f\n", PI);

    int num1 = 11;
    float num2 = 5;

    float result = num1 / num2;

    printf("%d", result);

    return 0;
}