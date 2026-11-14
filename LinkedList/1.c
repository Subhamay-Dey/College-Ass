#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(){
    struct Node *first;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = 45;
    first->next = NULL;
    printf("First Node created: %d\n", first->data);

    struct Node *second;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = 98;
    second->next = first;
    printf("Second Node crea ted: %d\n", second->data);
}