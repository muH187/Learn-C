#include<stdio.h>
#include<stdbool.h>

int main() {

    // Not ! reverse the state of the condtion.

    bool sunny = true;

    if(!sunny) {
        printf("Weather is cloudy.");
    }
    else {
        printf("Weather is sunny.");
    }


    return 0;
}