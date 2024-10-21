#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:- ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%2!=0) cout<<j;
            else{
                char(value) = char(64+j);
                cout<<value;
            }
        }
        cout<<endl;
    }
}