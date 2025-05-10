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
    int i =0, count=0;
    while(i<=5){
        if(ch[i]=='a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' ){
            count++;
        }
        i++;
    }
    cout<<count;
}