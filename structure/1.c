#include <stdio.h>

struct student {
    int marks;
    char name[25];
};

int main() {
    struct student s1 = {28, "Subho"};
    printf("The student marks: %d \n", s1.marks);
    printf("The student name: %s \n", s1.name);
};