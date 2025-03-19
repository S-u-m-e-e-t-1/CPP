#include<iostream>
using namespace std;

int main()

{

int i;

cout<<"EVEN//ODD\n";
for (i=2;i<=100; i++) {

if (i%2==0)

cout<<i<<" // ";
if (i%2!=0)
cout<<i<<"\n";
}

return 0;
}