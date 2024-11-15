#include<stdio.h>

struct Student{
    char name[12];
    float gpa;
};

int main(){

    struct Student student1 = {"Ali", 4.0};
    struct Student student2 = {"Mirza", 3.8};
    struct Student student3 = {"Hasan", 3.8};
    struct Student student4 = {"Huzaifa", 3.5};

    struct Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("Name: %s\t", students[i].name);
        printf("GPA: %.1f\n", students[i].gpa);
    }

    return 0;
}