#include<stdio.h>

double square(double x) {
    // double result = x * x;
    // return result;
    return x * x;
}

int main() {

    double result = square(3);
    printf("%.2lf", result);

    return 0;
}