#include<stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!\n");
    } 
    else if (age <= 0) {
        printf("You haven't even born yet!");
    }
    else {
        printf("You are too young to sign up!");
    }

    return 0;
}