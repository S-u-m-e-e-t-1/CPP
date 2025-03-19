#include<stdio.h>
#include <string.h>
int d(char [], int );
main()
{
    char a[50];
    int b,c;
    printf("Enter a string\n");
    scanf("%s",&a);
    b= strlen(a);
    c=d(a,b);
    if(c==1)
        printf("string is Pallindrome");
    else
        printf("string is not Pallindrome");
}
int d(char *e, int f)
{
    int i=0, j;
    for(j= f-1; i<=j; i++,j--)
    {
        if(e[i]== e[j])
            return 1;
        else
            return 0;
        break;
    }
}