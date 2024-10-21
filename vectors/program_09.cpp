#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



void swap(vector<int> &a){
    for(int i=0, j=a.size()-1-i; i<=j; i++){
        int temp;
        temp = a[i];
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
    swap(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // reverse(v.begin(), v.end());  this is the inbuilt method to reverse the given vector

}