#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    v.push_back(8);
    v.push_back(6);
    v.push_back(5);
    vector<int> v1(v.size());
    for(int i=0; i<v.size(); i++){
        int j = v.size()-1-i;
        v1[j] = v[i];
    }
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    
}