//header file
#include<iostream>
using namespace std;
int main() 
{
//initialising variable
int a, b, c;
cout <<"Enter any three numbers: ";
cin>>a;
cin>>b;
cin>>c;
//main coding part
if(a>=b && a>=c) 
{
cout<<"Largest number: "<<a;
}
else if(b>=c) 
{
cout<<"Largest number: "<<b;
}
else 
{
cout<<"Largest number: "<<c;
}
return 0;
}
