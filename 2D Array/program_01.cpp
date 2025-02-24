#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of students:- ";
    cin>>m;
    cout<<"Enter the number of columns:- ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // the table of students and their marks is as follows:- 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
}