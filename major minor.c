#include<stdio.h>

void main()
{
int age;

    printf(" Enter age");
    scanf("%d",&age);
    if(age<18)
    printf("minor");
    else
    if(age>=18&&age<=59)
    printf("major");
    if(age>=60)
    printf("senior citizen");
    
}