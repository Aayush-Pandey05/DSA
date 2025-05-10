#include<iostream>
using namespace std;
int main(){
    int n, m, minr, maxr, minc, maxc;
    cout<<"Enter the number of rows:- ";
    cin>>m;
    cout<<"Enter the number of columns:- ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements:- " <<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        } 
    }
    int count  = 0;
    int tne = m*n;

    minr = 0;
    maxr = m-1;
    minc = 0;
    maxc = n-1;

    while(minc<=maxc && minr<=maxr){
        // right:- 
        for(int j = minc; j<=maxc && count<tne; j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        
        //down:- 
        for(int i = minr; i<=maxr && count<tne; i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;

        //left:-
        for(int j = maxc; j>=minc && count<tne; j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;

        //up:-
        for(int i = maxr; i>=minr && count<tne; i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
}