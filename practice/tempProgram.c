#include<stdio.h>
#include<ctype.h>

int main() {

    char unit;
    double temp;

    printf("Is the temperature (F) or (C)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C') {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("Fahrenheit temperature is: %.2lf", temp);
    }
    else if(unit == 'F') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("Celsius temperature is: %.2lf", temp);
    }
    else {
        printf("Please choose valid unit of the temperature.");
    }

    return 0;
}