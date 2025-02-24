#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of columns and rows:- ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of the matrix:- "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // we will just reverse the even rows:- 
    for(int i=0; i<n; i++){
        int j = 0;
        int k = n-1;
        if(i%2!=0){
            while(j<=k){
                int temp = arr[i][j];
                arr[i][j] = arr[i][k];
                arr[i][k] = temp;
                j++;
                k--;
            }
        }
    }
    // print the updated array
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}