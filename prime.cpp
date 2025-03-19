#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"enter number";
    cin>>n;
    for(int i=2;i<n;i++)
    {
    if(n%i==0)
    c++;
    }
    if(c==0)
    cout<<n<<" is prime";
    else
    cout<<n<<" is not prime";
    
}