#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides of the triangle:- ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        if(a==b==c){
            cout<<"The triangle is an equilateral triangle ";
        }
        else if(a==b!=c || a!=b==c || a==c!=b){
            cout<<"The triangle is an isoceles triangle";
        }
        else{
            cout<<"The triangle is a scalen triangle";
        }
    }
    else{
        cout<<"Triangle doesn't exists";
    }
    return 0;
}