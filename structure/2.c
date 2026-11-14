#include <stdio.h> 

struct student {
    int age;
    float weight;
};


int main() {
    struct student c = {21, 70.5};
    struct student *p = &c;

    printf("Age: %d\n", (*p).age);
    printf("Weight: %.1f\n", p->weight);
}
    
