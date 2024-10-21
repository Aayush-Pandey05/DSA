#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the elements of the array:- ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]<35){
            cout<<"The failed roll number is:- "<<i+1;
        }
    }
}