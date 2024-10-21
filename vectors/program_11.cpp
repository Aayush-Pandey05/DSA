#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reversePart(int x, int y, vector<int> &a){
    for(int i=x, j=y; i<=j; i++, j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp; 
    }
    
    return;
}

void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void reverse(vector<int> &a){
    for(int i=0, j=a.size()-1; i<=j; i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return;
}

int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    display(v);
    int n = v.size(), k;
    cout<<"Enter the number of time array needs to be rotated:- ";
    cin>>k;
    if(k<n){
        reversePart(0 ,n-k-1, v);
        reversePart(n-k, n-1, v);
        reverse(v);
        display(v);
    }
    else if(k==n){
        display(v);
    }
    else{
        k = k-n;
        reversePart(0 ,n-k-1, v);
        reversePart(n-k, n-1, v);
        reverse(v);
        display(v); 
    }
}