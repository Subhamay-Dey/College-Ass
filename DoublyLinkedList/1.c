#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

struct node *newNode(int value) {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    n->data = value;
    n->next = NULL;
    n->prev = NULL;
    return n;
}

void insertBegin(int value) {
    struct node *n = newNode(value);
    n->next = head;
    if(head != NULL) {
        head->prev = n;
    }
    head = n;
}

void insertEnd(int value) {
    struct node *n = newNode(value);
    n->next = NULL;
    if(head == NULL) {
        n->prev = NULL;
        head = n;
        return;
    }
    struct node *temp = head;
    while(temp->next != NULL) {
        temp->next = temp;
    }
    temp->next = n;
    n->prev = temp;
}


int main () {
    int choice, val, key;

    while(1) {
        printf("\n===== DOUBLY LINKED LIST MENU =====\n");
        printf(" 1. Create a doubly linked list\n");
        if(scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            while(getchar() != '\n');
            continue;
        }

        switch (choice)
        {
        case 1: 
            create();
            break;
        
        default:
            break;
        }
    }
}