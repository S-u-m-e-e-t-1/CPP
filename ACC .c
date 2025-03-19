#include<stdio.h>
#include<string.h>

main()
{
    char a[200],b[200],x[200],z[200];
    int y;
    puts("Enter name");
    gets(a);
    puts("Creat password");
    gets(b);
    goto ac;
ac:
    if(strlen(b)!=8)
    {   printf("password is invalid\n Renter password");
        gets(b);
        goto ac;
    }
    else {
        printf("account created ");
        printf("enter details\n");
        goto details ;
    }
details:
    {
        puts("Name;");
        gets(x);
        puts("age:");
        gets(y);
        puts("address:");
        gets(z);
    }
}