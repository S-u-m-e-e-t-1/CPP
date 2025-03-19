#include<stdio.h>
#include <string.h>
main()
{
    int a,i=0,j=0,l=0,m,o,t,u=0,v=0,exit();
    char b[50],c[50],d[50],e[50],f[50],g[50],h[50],k[50],n[50],
        *p,q[50],r[50],s[50],w[50];
    printf("Enter your choice\n");
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        goto add ;
        break;
    case 2:
        goto cws;
        break;
    case 3:
        goto cus;
        break;
    case 4:
        goto cmpstr;
        break;
    case 5:
        goto clp;
        break;
    case 6:
        goto utl;
        break;
    case 7:
        goto ltu;
        break;
    case 8:
        goto cnv;
        break;
    case 9:
        goto rvs;
        break;
    default:
        printf("Invalid request");
    }
add:
    printf("Enter string\n ");
    gets(b);
    l=strlen(b);
    for(i=0; i<l; i++)
        printf("Address of %c is %u", b[i],& b[i]);
    exit();
cws:
    printf("Enter two strings\n");
    gets(d);
    gets(c);
    while(c[i]!='\0')
    {
        e[i]= c[i];
        i++;
    }
    while(d[j]!='\0')
    {
        e[i]= d[j];
        i++;
        j++;
    }
    e[i]='\0';
    puts(e);
    exit();
cus:
    printf("Enter two strings\n");
    gets(f);
    gets(g);
    strcat(f,g);
    puts(f);
    exit();
cmpstr:
    printf("Enter two strings\n");
    gets(h);
    gets(k);
    m=strcmp(h,k);
    if(m==0)
        printf("strings are equal");
    else
        printf("strings are not equal");
    exit();
clp:
    printf("Enter string\n ");
    gets(n);
    p=n;
    while(*p!='\0')
    {
        o++;
        p++;
    }
    printf("length of string=%d",o);
    exit ();
utl:
    printf("Enter a string in upper case\n");
    gets(q);
    puts(strlwr(q));
    exit();
ltu:
    printf("Enter a string in lower case\n");
    gets(r);
    puts(strupr(r));
    exit();
cnv:
    printf("Enter a string\n");
    gets(s);
    t=strlen(s);
    for(u=0; u<t; u++)
    {
        if(s[u]=='a'||s[u]=='e'||s[u]=='i'||s[u]=='o'
                ||s[u]=='u'||s[u]=='A'||s[u]=='E'||s[u]=='I'
                ||s[u]=='O'||s[u]=='U')
            v++;
    }
    printf("No of vowels=%d",v);
    exit ();
rvs:
    printf("Enter a string\n");
    gets(w);
    puts(strrev(w));
    exit();
}