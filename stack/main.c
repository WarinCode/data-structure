#include <stdio.h>
#include <stdbool.h>
#define SIZE 5
#define ERROR_CODE -1

int stack[SIZE];
int top = -1;

void push(int value);
int pop();
void display();
bool isFull();
bool isEmpty();
int maxSize();
short count();

int main() {
    int chioce;
    while(true){
        printf("Main program\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Count\n5. Exit\n");
        printf("Enter a number:");
        scanf("%d", &chioce);
        switch(chioce){
            case 1:
                int value;
                printf("Enter value:");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("%d\n", count());
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice please input the number between 1 - 5 only!");
        }
    }

    return 0;
}

void push(int value){
    if(isFull()){
        printf("Stack is full!\n");
    } else {
        top++;
        stack[top] = value;
        printf("Added %d sucessfully.\n", value);
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack is empty!\n");
        return ERROR_CODE;
    }
    int element = stack[top];
    top--;
    printf("Deleted %d successfully.\n", element);
    return element;
}

void display(){
    if(isEmpty()){
        printf("Stack is empty!\n");
    } else {
        for(int i = top; i >= 0; i--){
            printf("[%d] %d", i, stack[i]);
            puts("");
        }
    }
}

bool isFull(){
    return top == SIZE - 1;
}

bool isEmpty(){
    return top == -1;
}

int maxSize(){
    return sizeof(stack);
}

short count(){
    return top + 1;
}