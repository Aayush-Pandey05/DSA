#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to check:- ";
    cin>>n;
    int count = 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            count++;
            break; // if there is even a single number from which the number is divisible other than itself and one than it is composite
        }
    }
    if(count!=0){
        cout<<"The number is composite";
    }
    else{
        cout<<"The number is prime";
    }
    
}