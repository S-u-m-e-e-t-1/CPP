

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


void insertAtBeginning(struct Node** head, int n) {

    struct Node* new= (struct Node*)malloc(sizeof(struct Node));


    new->data = n;

    new->next = (*head);

    (*head) = new;
}


void insertAfter(struct Node* prev, int n)
{
    if (prev == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = n;
    new->next = prev->next;
    prev->next = new;
}


void insertAtEnd(struct Node** head, int n) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head; 

    new->data = n;
    new->next = NULL;

    if (*head== NULL) {
        *head = n;
        return;
    }

    while (last->next != NULL)
     last = last->next;

    last->next = new;
    return;
}


void deleteNode(struct Node** head, int k) {
    struct Node *temp = *head, *prev;

    if (temp != NULL && temp->data == k) {
        *head= temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != k) {
        prev = temp;
        temp = temp->next;
    }


    if (temp == NULL) return;


    prev->next = temp->next;

    free(temp);
}


int searchNode(struct Node** head, int k) {
    struct Node* s = *head;

    while (s!= NULL) {
        if (s->data == k)
            return 1;
       s= s->next;
    }
    return 0;
}

void sortLinkedList(struct Node** head)
{
    struct Node *current = *head, *index = NULL;
    int temp;

    if (head == NULL)
    {
        return;
    } else
    {
        while (current != NULL)
        {

            index = current->next;

            while (index != NULL)
            {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}


void printList(struct Node* node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}


int main()
{
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

    int item_to_find = 3;
    if (searchNode(&head, item_to_find))
    {
        printf("\n%d is found", item_to_find);
    }
    else
    {
        printf("\n%d is not found", item_to_find);
    }

    sortLinkedList(&head);
    printf("\nSorted List: ");
    printList(head);
}