#include <stdio.h>
#include <stdlib.h>

struct Node {
   int data;
   struct Node* next;
   struct Node* prev;
};

struct Node* head = NULL;
struct Node* tail = NULL;

void insertAtBeginning(int data) {
   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = data;

   if (head == NULL) {
      head = tail = newNode;
      newNode->next = head;
      newNode->prev = tail;
   }
   else {
      newNode->next = head;
      head->prev = newNode;
      newNode->prev = tail;
      tail->next = newNode;
      head = newNode;
   }
}

void insertAtEnd(int data) {
   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = data;

   if (head == NULL) {
      head = tail = newNode;
      newNode->next = head;
      newNode->prev = tail;
   }
   else {
      newNode->prev = tail;
      tail->next = newNode;
      newNode->next = head;
      head->prev = newNode;
      tail = newNode;
   }
}

void deleteFromBeginning() {
   if (head == NULL) {
      printf("List is empty.");
      return;
   }

   struct Node* temp = head;

   if (head == tail) {
      head = tail = NULL;
   }
   else {
      head = head->next;
      head->prev = tail;
      tail->next = head;
   }

   free(temp);
}

void deleteFromEnd() {
   if (head == NULL) {
      printf("List is empty.");
      return;
   }

   struct Node* temp = tail;

   if (head == tail) {
      head = tail = NULL;
   }
   else {
      tail = tail->prev;
      tail->next = head;
      head->prev = tail;
   }

   free(temp);
}

void display() {
   if (head == NULL) {
      printf("List is empty.");
      return;
   }

   struct Node* current = head;

   printf("Nodes of the circular double linked list: ");

   do {
      printf("%d ", current->data);
      current = current->next;
   } while (current != head);
}

int main() {
   insertAtBeginning(5);
   insertAtBeginning(10);
   insertAtEnd(15);
   insertAtEnd(20);

   display();

   deleteFromBeginning();
   deleteFromEnd();

   display();

   return 0;
}
