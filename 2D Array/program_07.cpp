//Question:- Matrix Multiplication:-

#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"Enter the number of rows in the first matrix:- ";
    cin>>m;
    cout<<"Enter the number of columns in the first matrix:- ";
    cin>>n;
    int a[m][n];
    cout<<"Enter the number of rows in the second matrix:- ";
    cin>>p;
    cout<<"Enter the number of rows in the second matrix:- ";
    cin>>q;
    int b[p][q];
    if(n==p){
        int c[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        cout<<endl;
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>b[i][j];
            }
        }
        cout<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                c[i][j] = 0;
                for(int k=0; k<p; k++){
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{// p!=q
    cout<<"this matrix multiplication is not possible";
    }
}