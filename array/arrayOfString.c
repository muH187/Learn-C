#include<stdio.h>
#include<string.h>

int main() {

    char cars[][10] = {"Tesla", "Lambo", "Civic", "Tucson", "Sonata"};

    strcpy(cars[0], "Corolla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
        printf("%s\n", cars[i]);
    }

    return 0;
}