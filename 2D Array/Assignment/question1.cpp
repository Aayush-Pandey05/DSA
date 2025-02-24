#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows and col:- ";
    cin>>n;
    int arr[n][n], brr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j] +=brr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}