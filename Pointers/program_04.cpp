#include<iostream>
using namespace std;
void product(int *a, int *b){
    cout<<"the product of the two numbers:- "<<(*a * *b);
}
int main(){
    int a,b;
    cout<<"enter the first number:- ";
    cin>>a;
    cout<<"enter the second number:- ";
    cin>>b;
    product(&a, &b);
}