#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void insertAtBeginning(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if(head != NULL)
        head->prev = newNode;
    else
        tail = newNode;
    head = newNode;
}

void insertAtEnd(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = tail;
    newNode->next = NULL;
    if(tail != NULL)
        tail->next = newNode;
    else
        head = newNode;
    tail = newNode;
}

void deleteFromBeginning() {
    if(head == NULL)
        return;
    struct node* nodeToDelete = head;
    head = head->next;
    if(head != NULL)
        head->prev = NULL;
    else
        tail = NULL;
    free(nodeToDelete);
}

void deleteFromEnd() {
    if(tail == NULL)
        return;
    struct node* nodeToDelete = tail;
    tail = tail->prev;
    if(tail != NULL)
        tail->next = NULL;
    else
        head = NULL;
    free(nodeToDelete);
}

void printList() {
    struct node* current = head;
    while(current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtEnd(30);
    insertAtEnd(40);
    printList(); // Output: 20 10 30 40 
    deleteFromBeginning();
    deleteFromEnd();
    printList(); // Output: 10 30 
    return 0;
}
