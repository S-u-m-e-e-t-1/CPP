// Linked list operations in C

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};


void insertAtBeginning(struct Node** h, int n) {

    struct Node* N= (struct Node*)malloc(sizeof(struct Node));
    N->data = n;

    N->next = (*h);
    (*h) = N;
}


void insertAfter(struct Node* p, int n) {
    if (p == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node* N= (struct Node*)malloc(sizeof(struct Node));
    N->data = n;
    N->next = p->next;
    p->next = N;
}

void insertAtEnd(struct Node** h, int n) {
    struct Node* N= (struct Node*)malloc(sizeof(struct Node));
    struct Node* l= *h;

    N->data = n;
    N->next = NULL;

    if (*h == NULL) {
        *h= N;
        return;
    }

    while (l->next!= NULL) l= l->next;

    l->next = N;
    return;
}


void deleteNode(struct Node** h, int k) {
    struct Node *t = *h, *p;

    if (t != NULL && t->data == k) {
        *h= t->next;
        free(t);
        return;
    }

    while (t != NULL && t->data != k) {
        p= t;
        t= t->next;
    }


    if (t== NULL) return;

    p->next = t->next;

    free(t);
}


int searchNode(struct Node** h, int k) {
    struct Node* c = *h;

    while (c != NULL) {
        if (c->data == k) return 1;
        c = c->next;
    }
    return 0;
}


void sortLinkedList(struct Node** h) {
    struct Node *c = *h, *i = NULL;
    int t;

    if (h== NULL) {
        return;
    } else {
        while (c != NULL) {
            i= c->next;

            while (i!= NULL) {
                if (c->data > i->data) {
                    t= c->data;
                    c->data = i->data;
                    i->data = t;
                }
                i = i->next;
            }
            c= c->next;
        }
    }
}


void printList(struct Node* node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);

    printf("Linked list: ");
    printList(head);

    printf("\nAfter deleting an element: ");
    deleteNode(&head, 3);
    printList(head);

    int f = 3;
    if (searchNode(&head,f)) {
        printf("\n%d is found",f);
    } else {
        printf("\n%d is not found", f);
    }

    sortLinkedList(&head);
    printf("\nSorted List: ");
    printList(head);
}