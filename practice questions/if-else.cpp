#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number:- ";
    cin>>a;
    if(a%5==0 && a%3==0){
        cout<<"The number is divisible by 5 and 3";
    }
    else{
        cout<<"The number is not divisible by 5 and 3";
    }
}