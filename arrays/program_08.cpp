#include<iostream>
using namespace std;
int main(){
    int n, product = 1;
    cout<<"Enter the number of elements in the array:- ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        product*=arr[i];
    }
    cout<<"The product of all the elements in an array:- "<<product;
}