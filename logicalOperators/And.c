#include<stdio.h>
#include<stdbool.h>

int main() {

    // && All conditions must be true to execute the code.

    int temp = 30;
    bool sunny = false;

    if(temp >= 0 && temp <= 30 && sunny) {
        printf("Weather is good.");
    }
    else {
        printf("Weather is bad.");
    }

    return 0;
}
