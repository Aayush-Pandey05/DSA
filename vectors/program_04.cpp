#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(10);
    v.push_back(9);
    v.push_back(1);
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";// this is same as typing v[i]
    }
    cout<<endl;

    //SORTING
    sort(v.begin(),v.end());// this will sort the array for us
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";// this is same as typing v[i]
    }
    cout<<endl;
}