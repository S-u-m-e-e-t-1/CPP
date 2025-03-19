#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct node {
	int data;
	struct node *next;
};
struct *iab(struct node *head,int new_data) {
	struct node*new=(struct node *)malloc(sizeof(struct node));
	new->data=new_data;
	new->next=(*head);
	(*head)=new_data;
	exit(0);

}
void ian(struct node *prv,int new_data) {
	if(prev==NULL)
		printf("cant be null");
	return;
	else {
		struct node *new=(struct node *)malloc(sizeof(struct node));
		new->data=new_data;
		new->next=prv->next;
		prv->next=new;
	}
	exit(0);
}
void iae(struct node *head,int new_data) {
	struct node *new=(struct node *)malloc(sizeof(struct node));
	struct node *last=*head;
	new->data=new_data;
	new->next=NULL;
	if(*head==NULL) {
		*head=new;
	}
	while(last->next!=NULL) {
		last=last->next;
		last->next=new;
	}
}
void dlt(struct node *head,int k) {
	struct node *temp=*head,*prv;
	if(temp!=NULL&&temp->data==k) {
		*head=temp->next;
		free(temp);
	}
	while(temp!=NULL&&temp->data==k) {
		prv=temp;
		temp=temp->next;
	}

	if(temp==NULL)
		return;
	prv->next=temp->next;
	free(temp);
}


void pll(struct node*node) {
	while(node!=NULL) {
		printf("%d",node->next);
		node=node->next;
	}
}
main() {
	struct node *head=NULL;
	iab(&head,3);
	ian(head->nexy,5);
	iae(&head,4);
	iab(&head,2);
	iae(&head,1);
	printf("list\n");
	pll(&head);
	printf("list after deleting\n");
	dlt(&head,3);
	pll(&head);
}