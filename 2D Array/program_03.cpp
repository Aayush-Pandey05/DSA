#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter the number of rows:- ";
    cin>>m;
    cout<<"Enter the number of columns:- ";
    cin>>n;
    int arr[m][n];
    int sum = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }
    }

    cout<<"The sum of all the elements in the 2d array is:- "<<sum;
}