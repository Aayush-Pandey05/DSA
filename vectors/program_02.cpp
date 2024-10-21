#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(5);
    v.push_back(46);
    v.push_back(65);
    v.push_back(67);
    v.push_back(68);
    v.push_back(69);
    v.push_back(85);
    v.push_back(86);
    v.push_back(83);
    v.push_back(2);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    cout<<"capacity:- "<<v.capacity()<<endl;

    v.pop_back();// this function removes the last element present in the vector and decreases the size by 1

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }// in this case the element 2 is deleted--> pop_back() will not reduce the capacity, it will remain the same  
    cout<<endl;
    cout<<"capacity:- "<<v.capacity()<<endl; // thsi will remain the same
}