#include<iostream>
using namespace std;
int main()
{
int i,no, first=0, second=1, next;
first=0;
second=1;
cout<<"Enter number of terms for Series: ";
cin>>no;
cout<<"The first " << no<<" terms of fibonacci series are: \n";
for(i=0; i<no; i++)
{
cout<<"\n"<<first;
next = first + second;
first = second;
second = next;
}
    return 0;
}
