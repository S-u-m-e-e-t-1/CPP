#include<iostream>
using namespace std;
int main()
{
int i,j,k,l;
for(i=5;i>=1; i--)
{
for(j=1;j<i;j++)
cout<<" ";
for(k=5; k>=i;k--)
cout<<"*";
for(l=5; l>i;l--)
cout<<"*";
cout<<"\n";
}
for(i=1; i <= 4; i++)
{
for(j=1; j<= i; j++)
cout<<" ";
for( k=4; k>= i; k--)
cout<<"*";
for(l= 4; l> i; l--)
cout<<"*";
cout<<"\n";
}
}