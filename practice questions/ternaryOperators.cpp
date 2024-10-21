#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks of the student:- ";
    cin>>marks;
    string result = (marks>=33)? "passed":"failed"; // this the compact form of if else statement also known as ternary operators
    cout<<result;
}