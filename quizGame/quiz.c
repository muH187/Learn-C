#include<stdio.h>
#include<ctype.h>

int main() {

    char questions[][100] = {"1. What is the capital city of Pakistan? ",
                             "2. Largest city of Pakistan? ",
                             "3. Who is the founder of Pakistan? "};

    char options[][100] = {"A. Rawalpindi", "B. Islamabad", "C. Lahore", "D. Karachi",
                           "A. Sialkot", "B. Quetta", "C. Multan", "D. Karachi",
                           "A. Gandhi", "B. Hitler", "C. Donald Trump", "D. Jinnah"};

    char answers[3] = {'B', 'D', 'D'};

    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("Welcome to my Quiz Game\n");

    for(int i = 0; i < numberOfQuestions; i++) {
        printf("*********************\n");
        printf("%s\n", questions[i]);
        printf("*********************\n");

        for(int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }
        printf("Guess: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answers[i]) {
            printf("Correct!\n");
            score++;
        }
        else {
            printf("Wrong!\n");

        }
    }

    printf("*********************\n");
    printf("Your Final Score: %d/%d\n", score, numberOfQuestions);
    printf("*********************\n");

    return 0;
}