#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:- ";
    cin>>n;
    char ch[n];
    for(int i=0; i<n; i++){
        cin>>ch[i];
    }
    for(int i=0; i<n; i++){
        if(i%2 != 0){
            ch[i] = 'a';
        }
    }
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
}