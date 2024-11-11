#include<stdio.h>

void birthday(char name[], int age) {
    printf("Happy birthday %s", name);
    printf("\nYou are %d years old.\n", age);
}

int main() {

    birthday("Ali", 20);
    birthday("Mirza", 20);

    return 0;
}