#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int data;
   struct node *next;
} *top = NULL;

#define SIZEOF_NODE sizeof(struct node)

void push(int data);
struct node *pop();
void display();
int count();

int main(){
    int choice;

    while(true){
        printf("\n\nMain program\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Count\n5. Exit");
        printf("\nEnter a number:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                int data;
                printf("Enter your data:");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf(count() == 1 ? "There is %d node.": "There are %d nodes.", count());
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice please input the number between 1 - 5 only!");
        }
    }

    return 0;
}

void push(int data){
    struct node *newNode = NULL;
    newNode = malloc(SIZEOF_NODE);
    newNode -> data = data;
    newNode -> next = top;
    top = newNode;
}

struct node *pop(){
    struct node *element = top;
    top = top -> next;
    free(element);
    return top;
}

void display(){
    struct node* temp = top;
    while(temp != NULL){
        printf("%d --> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int count(){
    int counter = 0;
    struct node* temp = top;
    while(temp != NULL){
        counter++;
        temp = temp -> next;
    }
    return counter;
}