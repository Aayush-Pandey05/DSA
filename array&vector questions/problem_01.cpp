#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int noz=0, noo=0; // here noz = number of zeroes and noo = number of ones
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<v.size(); i++){
        if(v[i]==0) noz+=1;
        else noo+=1;
    }
    for(int i=0; i<v.size(); i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}