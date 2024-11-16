#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    const int MIN = 1;
    const int MAX = 100;
    int guesses = 0;
    int guess;
    int answer;

    srand(time(0));
    answer = (rand() % MAX) + MIN;

    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if(guess > answer) {
            printf("It's Too High!\n");
        }
        else if(guess < answer) {
            printf("It's Too Low!\n");
        }
        else {
            printf("CORRECT!\n");
        }
        guesses++;

    }while(guess != answer);

    printf("Guesses: %d", guesses);

    return 0;
}