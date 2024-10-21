#include<iostream>
using namespace std;
int main(){
    int n, key, a, b;
    cout<<"Enter the number of elements:- ";
    cin>>n;
    cout<<"Enter the key:- ";
    cin>>key;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the element:- ";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            if(sum==key){
                cout<<i+1<<" "<<j+1;
            }
        }
    }
}