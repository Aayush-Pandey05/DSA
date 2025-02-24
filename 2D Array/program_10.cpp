#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows/columns:- ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elemnts of the array:- "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        int j = 0;
        int k =n-1;
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
    for(int i=n-1; i>=0; i--){
        for(int j =0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}