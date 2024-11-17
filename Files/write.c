#include<stdio.h>

int main(){

    FILE *pF = fopen("C:\\Users\\Ali\\Desktop\\cFile.txt", "w");
    fprintf(pF, "This is me Muhammad Ali, learning C programming language from the bro code youtube channel.");



    fclose(pF);

// How to remove a file...
    // if(remove("text.txt") == 0){
    //     printf("That file is removed successfully.");
    // }
    // else {
    //     printf("That file doesn't exist.");
    // }

    return 0;
}