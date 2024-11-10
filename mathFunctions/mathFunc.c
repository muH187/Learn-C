#include <stdio.h>
#include <math.h>

int main() {

    double squareRoot = sqrt(81);
    printf("\n%lf", squareRoot);

    double powerOf = pow(2, 3);
    printf("\n%lf", powerOf);

    int rounded = round(3.42);
    printf("\n%d", rounded);

    int rounded2 = round(3.92);
    printf("\n%d", rounded2);

    int roundUp = ceil(8.11);
    printf("\n%d", roundUp);
    
    int roundDown = floor(5.99);
    printf("\n%d", roundDown);

    return 0;
}