#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers :- ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"the greatest number is:- "<<a;
        }
        else{
            cout<<"The greatest number is:- "<<c;
        }
    }
    else if(b>c){
        if(b>a){
            cout<<"the greatestr number is:- "<<b;
        }
        else{
            cout<<"The greatest number is:- "<<a;
        }
    }
    else{
        if(c>b){
            cout<<"The greatest number is:- "<<c;
        }
        else{
            cout<<"The greatest number is:- "<<b;
        }
    }
    return 0;
}