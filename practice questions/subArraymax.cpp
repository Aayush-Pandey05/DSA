#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, prod=0;
    cout<<"Enter the number of elements:- ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the element:- ";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sub=1;
            for(int k=i; k<=j; k++){
                sub *= arr[k];
            }
            prod = max(prod, sub);
        }
    }
    cout<<"The maximum product is:- "<<prod;
}