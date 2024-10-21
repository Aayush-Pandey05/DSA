#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cout<<"Enter the number you want to calculate the number of digits of:- ";
    cin>>n;
    int a=n;
    while(n!=0){
        count++;
        n = n/10;
    }
    if(a==0){
        cout<<"The number of digits = 1";
    }
    else{
        cout<<"The number of digits of number is:- "<<count;
    }
}