#include<stdio.h>

enum Day{Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main() {

    enum Day today = Sun;

    if(today == Sat || today == Sun) {
        printf("It's weekend! Enjoy...");
    }
    else {
        printf("I have to go to work :(");
    }

    return 0;
}