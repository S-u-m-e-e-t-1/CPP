#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

int main() {
    int num;
    Node *head = NULL, *tail = NULL;

    printf("Enter integers to add to the linked list (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        Node *new_node = malloc(sizeof(Node));
        new_node->data = num;
        new_node->next = NULL;
        if (tail == NULL) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }

    printf("Linked list:\n");
    for (Node *curr = head; curr != NULL; curr = curr->next) {
        printf("%d ", curr->data);
    }
    printf("\n");

    // Free memory
    Node *curr = head;
    while (curr != NULL) {
        Node *next = curr->next;
        free(curr);
        curr = next;
    }

    return 0;
}
