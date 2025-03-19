#include <stdio.h>
#include <stdlib.h>
struct node {
	int info;
	struct node *next;
	struct node *prv;
};
struct node*head=NULL;
struct node*last=NULL;
struct node *create_ll(int data) {
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->info=data;
	new_node->next=NULL;
	new_node->prv=NULL;
	return new_node;
}
void display(struct node *node) {
	
	while(node!= NULL) {
		printf("\t %d", node-> info);
		node= node-> next;
	}
}
void insertatfirst(int info) 
{
	struct node *new_node =create_ll(info);
	if(head==NULL)
		head=new_node ;
	else {
		new_node->next=head;
		head->prv=new_node;
		head=new_node;
	}
}
void insertatend(int info) {
	struct node *new_node =create_ll(info);
	if(last==NULL)
		last=new_node ;
	else {
		new_node->prv=last;
		last->next=new_node;
		last=new_node;
	}
}
int main()
{
	struct node*head=NULL;
	insertatfirst(9);
    insertatend(8);
    display(head);
    return 0;
}













