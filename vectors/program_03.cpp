#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5,7);// this means the capacity of vector is 5 and every element is equal to 7
    // if we are not specifying the value 7, then the vector will be created with 
    // capacity & size = 5 and every element in it will be equal to 0

    //                   TAKING INPUT:-
    //     METHOD 1:-

    // vector<int> v(5);
    // for(int i=0; i<v.size(); i++){
    //     cin>>v[i];
    // }
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }


    //     METHOD 2:- 

    vector<int> v;
    for(int i=0; i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}