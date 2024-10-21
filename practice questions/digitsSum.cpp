#include<iostream>
using namespace std;
int main(){
    int n, digit, sum=0;
    cout<<"Enter the number:- ";
    cin>>n;
    while(n!=0){
        digit = n%10;
        sum += digit;
        n = n/10;
    }
    cout<<"The sum of the digits is:- "<<sum;
    return 0;
}