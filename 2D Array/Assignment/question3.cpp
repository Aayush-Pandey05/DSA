#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, m, a;
    int sum = 0, mx = INT16_MIN;
    cout<<"Enter the number of rows:- ";
    cin>>n;
    cout<<"Enter the number of columns:- ";
    cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            sum += arr[i][j];
            if(max(mx,sum)!=mx){
                a = i+1;
            }
        }
    }
    cout<<a;
}