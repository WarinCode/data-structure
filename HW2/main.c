#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}  *top = NULL;

void push(int value);
void pop();
void display();

int main(void) {
    push(9);
    push(8);
    pop();
    pop();
    push(7);
    push(6);
    display();
    return 0;
}

void push(int value) {
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode -> data = value;
    if(top == NULL){
        newnode -> next = NULL;
    } else {
        newnode -> next = top;
    }
    top = newnode;
    printf("\nInsertion is Success!!!\n");
}

void pop(){
    if(top == NULL) {
        printf("\nStack is Empty!!!\n");
    } else {
        struct node *temp = top;
        printf("\nDeleted element: %d\n",
        temp -> data);
        top = temp -> next;
        free(temp);
    }
}

void display() {
    if(top == NULL) {
        printf("\nStack is Empty!!!\n");
    }
    else {
        struct node *temp = top;
        puts("");
        while(temp -> next != NULL){
            printf("%d ---> ",temp -> data);
            temp = temp -> next;
        }
        printf("%d ---> NULL\n\n",temp -> data);
    }
}