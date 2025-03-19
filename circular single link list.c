#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    char choice;

    do {
        printf("Enter data to insert: ");
        scanf("%d", &data);

        Node* newNode = (Node*) malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        tail->next = head;


    } while (data!=-1);

    printf("Circular Singly Linked List: ");
    Node* current = head;
    do {
        if(current->data==-1)
        {
            break;
        }
        printf("%d ", current->data);
        current = current->next;
    }while (current != head);
    printf("\n");

    return 0;
}
