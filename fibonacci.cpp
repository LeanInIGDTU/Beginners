#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    
}

int main(){
    int n;
    cout<<"Enter the number of terms till which you want to see the value:";
    cin>>n;
    fib(n);

    return 0;
}
