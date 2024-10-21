#include<iostream>
using namespace std;
int main(){
    int a=1, b=1, sum=0, n;
    cout<<"Enter the number:- ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        sum = a+b;
        a=b; // doing this step before b=sum is imp!!
        b=sum;
    }
}