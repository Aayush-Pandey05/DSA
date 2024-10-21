#include<iostream>
using namespace std;
int main(){
    int n, m, product=1;
    cout<<"Enter the number:- ";
    cin>>n;
    cout<<"Enter the power:- ";
    cin>>m;
    for(int i=1; i<=m; i++){
        product *= n;
    }
    cout<<"The result is:- "<<product;
}