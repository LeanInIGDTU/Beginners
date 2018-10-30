#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    cout<<"Enter three different numbers: ";
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<"Largest Element is "<<arr[2];
    return 0;
}
