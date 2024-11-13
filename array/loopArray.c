#include<stdio.h>

int main() {

    double prices[] = {5.0, 12.0, 25.0, 10.0, 22.0, 30.0};

                          // 48       /       8
    for(int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}