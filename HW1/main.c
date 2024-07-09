#include <stdio.h>
#include <stdlib.h>

 struct node {
     unsigned long long data;
     struct node *next;
 } *head, *temp;

/* Initialize nodes */
struct node *node1 = NULL;
struct node *node2 = NULL;
struct node *node3 = NULL;

// Declare prototype functions
void insert();
void printLikedList();

int main() {
    /* Allocate memory */
    node1 = malloc(sizeof(struct node));
    node2 = malloc(sizeof(struct node));
    node3 = malloc(sizeof(struct node));

    /* Assign data values */
    node1 -> data = 6630250435;
    node2 -> data = 6630250436;
    node3 -> data = 6630250437;

    /* Connect nodes */
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = NULL;
    head = node1;

    // Insert last node
    insert();
    // Print all nodes in Linkedlist
    printLikedList();

    return 0;
}

void insert(){
    temp = head;
    struct node *newNode = malloc(sizeof(struct node));
    printf("Enter your student id: ");
    scanf("%lld", &newNode -> data);
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void printLikedList(){
    temp = head;
    puts("List elements are -");
    while(temp != NULL){
        printf("%lld ---> ", temp -> data);
        temp = temp -> next;
    }
    puts("");
}
