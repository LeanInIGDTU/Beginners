#include<iostream>
using namespace std;
int main()
{
int i,no, first=0, second=1, next;
cout<<"Enter number of terms for Series: ";
cin>>no;
cout<<"Fibonacci series are: \n";
for(i=0; i<no; i++)
{
    if(i<=1)
    {
        next=first;
        first=second;
        second=next;
    }
    else
    {
        next = first + second;
        first = second;
        second = next;
    }
    cout<<next<<"\t";
}
    return 0;
}
