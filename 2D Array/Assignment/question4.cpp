#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows and col:- ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of the array:- "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
            else if(i+j == (n-1)){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}