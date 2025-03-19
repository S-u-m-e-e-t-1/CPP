#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
}
printlinklist(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->val);
        p=p->next;
    }
}
main()
{
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));

    one->val=4;
    two->val=5;
    three->val=8;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;

    printlinklist(head);

}