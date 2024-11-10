#include<stdio.h>

int main() {

    const double PI = 3.14159;
    double radius;
    double circumference;

    double area;
    // double length;
    // double width;

    // printf("Enter the length: ");
    // scanf("\n%lf", &length);

    // printf("Enter the width: ");
    // scanf("\n%lf", &width);

    // area = length * width;

    // printf("The area is: %lf", area);

    printf("\nEnter the radius of the circle: ");
    scanf("\n%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("The circumference of the circle is: %lf", circumference);
    printf("\nThe area of the circle is: %lf", area);

    return 0;
}