#include<iostream>
#include<vector>
using namespace std;
void reversePart(int x, int y, vector<int> &a){
    for(int i=x, j=y; i<=j; i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i = 0, j = 2;
    reversePart(i , j , v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}