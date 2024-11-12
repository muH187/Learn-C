#include<stdio.h>

int findMax(int x, int y) {
    return (x > y) ? x : y;
}

int main() {

    int result = findMax(10, 123);
    printf("%d", result);

    return 0;
}