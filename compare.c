#include<stdio.h>
#include<string.h>
main()
{
    char s1[100],s2[100];
    int i=0,flag=0;
    printf("Enter string 1\n");
    gets(s1);
    printf("Enter string 2\n");
    gets(s2);
    if(strlen(s1)==strlen(s2))
    {
        while(s1[i]!='\0'||s2[i]!='\0')
        {
            if(s1[i]!=s2[i])
            {
                flag++;
                break;
            }
            i++;
        }


        if(flag==0)
            printf("strings are equal");
        else
            printf("not");
    }
    else
        printf("not");

}