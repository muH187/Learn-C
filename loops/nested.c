#include<stdio.h>

int main() {

    int rows;
    int columns;
    char symbols;

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    printf("Enter any character to print: ");
    scanf(" %c", &symbols);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            printf("%c", symbols);
        }
        printf("\n");
    }

    return 0;
}