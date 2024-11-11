#include<stdio.h>

int main() {


    // || at least 1 condition needs to be true to execute the code.

    int temp = 100;

    if(temp <= 0 || temp >= 30) {
        printf("Weather is bad.");
    } 
    else {
        printf("Weather is good.");
    }

    return 0;
}