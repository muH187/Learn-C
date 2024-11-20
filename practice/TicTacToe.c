#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
char playerMove();
char computerMove();
int checkFreeSpaces();
void checkWinner();
char printWinner();

int main(){

    srand(time(0));

    resetBoard();
    printBoard();

    char winner = ' ';

    return 0;
}

void resetBoard(){
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard(){
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n"),
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n"),
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

char playerMove(){
    int x;
    int y;

    x--;
    y--;

    if(x < 1 || x > 3 || y < 1 || y > 3 || board[x][y] != ' ') {
        printf("Invalid Move!");
    }

    return board[x][y];
}

char computerMove() {
    int x = rand() % 3;
    int y = rand() % 3;

    return board[x][y];
}

int checkFreeSpaces(){
    int freeSpaces = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] == ' ') {
                freeSpaces++;
            }
        }
    }
}

void checkWinner(){
    
}