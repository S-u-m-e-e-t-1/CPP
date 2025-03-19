#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main() {
    int n, i, data;
    struct Node *head, *tail, *newNode;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create the head node
    head = NULL;
    tail = NULL;

    // Create the rest of the nodes
    for (i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &data);

        // Create a new node
        newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->prev = tail;
        newNode->next = NULL;

        // Update pointers for head and tail
        if (head == NULL) {
            head = newNode;
        }
        if (tail != NULL) {
            tail->next = newNode;
        }
        tail = newNode;
    }

    // Print the linked list
    printf("The linked list is: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    return 0;
}
