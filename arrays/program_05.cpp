#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the arrays:- ";
    cin>>n;
    int arr[n], product = 1;
    for(int i=0; i<n; i++){
        cout<<"Enter the element:- ";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        product *= arr[i];
    }
    cout<<"The product of all the elements present inside the array is:- "<<product;
}