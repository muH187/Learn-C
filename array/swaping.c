#include<stdio.h>

int main() {

    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;
    

    printf("x = %c\n", x);
    printf("y = %c", y);

    return 0;
}