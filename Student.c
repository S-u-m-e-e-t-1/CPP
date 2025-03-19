#include<stdio.h>
struct Student
{
int Roll;
char Sname[20];
float mark;
}
main()
{
int i, r, s, a, b, c, d;
char x[20];
float m;
struct  Student S[5];
for(i=0;i<5;i++)
{
printf("Enter Roll =");
scanf("%d",&S[i].Roll);
printf("Enter Name=");
scanf("%s",&S[i].Sname);
printf("Enter mark=");
scanf("%f",&S[i].mark);
}
printf("Enter your choice");
scanf("%d",&a);
switch(a)
{ 
case 1:
{
printf("Enter a roll no=");
scanf("%d",&r);
for(i=0;i<5;i++)
{
if(S[i].Roll==r)
{
s=i;
printf("\n Roll=%d",S[s].Roll);
printf("\n Name=%s", S[s].Sname);
printf("\n Mark=%f",S[s].mark);
}
}
}
break;
case 2:
{
printf("Enter a name=");
scanf("%s",&x);
for(i=0;i<5;i++)
{
if(S[i].Sname==x)
{
b=i;
printf("\n Roll=%d",S[b].Roll);
printf("\n Name=%s", S[b].Sname);
printf("\n Mark=%f",S[b].mark);
} 
}
}
break;
default:
printf("Not found");
}
}