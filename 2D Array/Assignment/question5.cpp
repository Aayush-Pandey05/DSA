#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows and col:- ";
    cin>>n;
    int arr[n][n], brr[n][n];
    cout<<"Enter the elements of the first array:- "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            brr[i][j] = arr[j][n-1-i];
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}