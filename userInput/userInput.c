#include<stdio.h>

int main() {

    char name[25];
    int age;

    printf("\nWhat is your name? ");
    // scanf("%s", &name);
    fgets(name, 25, stdin);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nYour name is %s", name);
    printf("\nYou are %d years old.", age);

    return 0;
}