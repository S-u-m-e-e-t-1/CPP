#include <stdio.h>


void deletechar(int *s,int c,int x)
{
    int i,k=0,f;


    for(i=0; i<x; i++)
    {
        s[i]=s[i+k];


        if(s[i]==c)
        {
            k++;
            i--;
        }

    }
    f=i-k;
    for(i=0; i<f; i++)
        printf("%d,",s[i]);

}


int main()
{

    int s[1000],c,n,i,d;

    printf("Enter  the string size  : ");
    scanf("%d",&n);
    printf("Enter character: ");
    for(i=0; i<n; i++)
        scanf("%d",&s[i]);
    printf("valu ;");
    scanf("%d",&c);

    deletechar(s,c,n);



    return 0;



}