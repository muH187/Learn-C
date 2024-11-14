#include<stdio.h>

int main() {

    int array[] = {1, 23, 4, 5, 56, 92, 39, 71, 3, 49};
    int size = sizeof(array)/sizeof(array[0]);

    printf("%d", size);

    return 0;
}