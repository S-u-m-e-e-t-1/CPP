#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    int i=0,j,c,n;
    printf ("Enter the string ") ;
    scanf("%s",a);
    n=strlen(a);
    for(j=n-1;i<=j;i++,j--)
    {
        if(a[i]==a[j])
            c=1;
        else
            c=0;
        break;
        
    }
    if (c==1)
        printf ("string is palindrome\n" );
    else
        printf ("string is not palindrome\n" );
}