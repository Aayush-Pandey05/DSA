#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Emter the first number:- ";
    cin>>a;
    cout<<"Emter the second number:- ";
    cin>>b;
    char ch;
    cout<<"Enter the operation you want:- ";
    cin>> ch;
    switch(ch){
        case '+':
            cout<<"The sum is:- "<<a+b;
            break;
        case '-':
            cout<<"The difference is:- "<<a-b;
            break;
        case '/':
            cout<<"The result is:- "<<a/b;
            break;
        case '*':
            cout<<"The product is:- "<<a*b;
            break;
        default: cout<<"The operator is beyond the scope";
    }
    return 0;
}