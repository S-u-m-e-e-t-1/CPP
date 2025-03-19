#include<stdio.h>
#include<string.h>
int main() {
    int a,i=0,j=0,l=0,m,o,t,u=0,v=0;
    char s1[50],s2[50],s3[50],s4[50],s5[50],s6[50],s7[50],s8[50],s9[50],
         *p,s10[50],s11[50],s12[50],s13[50];
    printf("\n\n\n\t\t<<<<<<<<<<operation on string>>>>>>>>>>");
    printf("\n1. show address of each character in string\n2.concatenate two strings without using streat function.");
    printf("\n3.concatenate two strings using streat function.\n4.compare two strings");
    printf("\n5.calculate length of the string (use pointers)\n6.conert all lowercase characters to uppercase");
    printf("\n7.convert all uppercase characters to lowercase\n8.calculate number of vowels\n9.reverse the string");
    
    printf("\nenter your choice\n");
    scanf("%d", &a);
    switch(a) {
    case 1:
        printf("enter string\n ");
        scanf("%s",&s1);
        l=strlen(s1);
        for(i=0; i<l; i++)
            printf("address of %c is %u", s1[i],&s1[i]);

        break;
    case 2:
        printf("enter two strings\n");
        scanf("%s%s",&s2,&s3);
        while(s2[i]!='\0') {
            s4[i]= s2[i];
            i++;
        }
        while(s3[j]!='\0') {
            s4[i]= s3[j];
            i++;
            j++;
        }
        s4[i]='\0';
        puts(s4);
        break;
    case 3:
        printf("enter two strings\n");
        scanf("%s%s",s5,s6);


        puts(strcat(s5,s6));
        break;
    case 4:
        printf("enter two strings\n");
        scanf("%s%s",s7,s8);

        m=strcmp(s7,s8);
        if(m==0)
            printf("strings are equal");
        else
            printf("strings are not equal");
        break;
    case 5:
        printf("enter string\n ");
        scanf("%s",s9);
        p=s9;
        while(*p!='\0') {
            o++;
            p++;
        }
        printf("length of string=%d",o);
        break;
    case 6:
        printf("enter a string in upper case\n");
        scanf("%s",s10);
        puts(strlwr(s10));
        break;
    case 7:
        printf("enter a string in lower case\n");
        scanf("%s",s11);
        puts(strupr(s11));
        break;
    case 8:
        printf("enter a string\n");
        scanf("%s",s12);
        t=strlen(s12);
        for(u=0; u<t; u++) {
 if(s12[u]=='a'||s12[u]=='e'||s12[u]=='i'||s12[u]=='o'
||s12[u]=='u'||s12[u]=='A'||s12[u]=='E'||s12[u]=='I'
                   ||s12[u]=='O'||s12[u]=='U')
                v++;
        }
        printf("no of vowels=%d",v);

        break;
    case 9:
        printf("enter a string\n");
        scanf("%s",s13);
        puts(strrev(s13));
        break;
    default:
        printf("invalid request");
    }

return 0;
}