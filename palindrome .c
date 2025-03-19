#include<stdio.h>
#include<string.h>
main( )
{
char str[10];
int i=0,j,flag;
printf ("Enter the word ") ;
scanf("%s",str) ;
j=strlen(str)-1;
while (i<=j )
{
if(str[i]==str[j])
flag=1;
else
flag=0;
break;
i++;
j--;
}
if (flag==1)
printf ("Word is palindrome\n" );
else
printf ("Word is not palindrome\n" );
}