/*
    NOTE:- 
        Vectors follow pass by value and we can use & to make it pass by
        referance..

*/

#include<iostream>
#include<vector>
using namespace std;

void change(vector<int> &a){// the &a will make it pass by referance and it will change the values directly in the address of the vector
    a[0] = 100;
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);

    for(int i=0; i<v.size(); i++){// this will print the same value of v(until and unless you use &a in the function declaration) because vectors are pass by values
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
