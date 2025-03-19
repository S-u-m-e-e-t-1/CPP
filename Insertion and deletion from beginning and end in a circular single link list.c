#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node node;

node *head = NULL;

// function to insert node at beginning of the list
void insertAtBeginning(int value) {
    node *newNode = (node *) malloc(sizeof(node));
    newNode->data = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    }
    else {
        node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newNode->next = head;
        head = newNode;
        temp->next = head;
    }
}

// function to insert node at end of the list
void insertAtEnd(int value) {
    node *newNode = (node *) malloc(sizeof(node));
    newNode->data = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    }
    else {
        node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

// function to delete node from beginning of the list
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty.\n");
    }
    else {
        node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        node *delNode = head;
        head = head->next;
        temp->next = head;
        free(delNode);
    }
}

// function to delete node from end of the list
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty.\n");
    }
    else {
        node *temp = head;
        while (temp->next->next != head) {
            temp = temp->next;
        }
        node *delNode = temp->next;
        temp->next = head;
        free(delNode);
    }
}

// function to display the list
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
    }
    else {
        node *temp = head;
        printf("List elements: ");
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
        printf("\n");
    }
}

int main() {
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtBeginning(0);
    insertAtEnd(3);
    insertAtBeginning(-1);
    display();
    deleteFromBeginning();
    deleteFromEnd();
    display();
    return 0;
}
