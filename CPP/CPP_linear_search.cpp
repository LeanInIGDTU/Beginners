#include<iostream>
using namespace std;
int main()
{
   
  int arr[10], i, num, n, f=0, pos;
  cout<<"Enter the array size : ";
  cin>>n;
  cout<<"Enter Array Elements : ";
  for(i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter the number to be search : ";
  cin>>num;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==num)
      {
         f=1;
         cout<<"Element found at "<<i+1;
         break;
      }
   }
   if(f==0)
        cout<<"Element not found";
    return 0;
}
