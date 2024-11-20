#include<stdio.h>
#include<ctype.h>

int main(){

    char questions[][100] = {"1. Capital of Spain?", "2. Capital of USA?", "3. Capital of China?"};

    char options[][100] = {"A. Berlin", "B. Moscow", "C. Madrid", "D. Tokyo",
                         "A. New York City", "B. Washington D.C", "C. Dallas", "D. Miami",
                         "A. Beijing", "B. Muscat", "C. Hong Kong", "D. Wuhan"};

    char answers[3] = {'C', 'B', 'A'};

    char guess;
    int score = 0;

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    for(int i = 0; i < numberOfQuestions; i++){
        printf("*********************\n");
        printf("%s\n", questions[i]);
        

        for(int j = i * 4; j < (i * 4) + 4; j++){
            printf("%s\n", options[j]);
        }
        printf("*********************\n");

        printf("Enter your guess: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answers[i]){
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong!\n");
        }
    }

    printf("Your final score is %d/%d", score, numberOfQuestions);

    return 0;
}