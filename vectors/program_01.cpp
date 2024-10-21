#include<iostream>
#include<vector>// this header file enables th euse of vectors
using namespace std;
int main(){
    vector<int> v; // this is the declaration of a vector of name v
    // mentioning the size of the vector is not required
    v.push_back(6);// never use [] while inserting in vectors--> always use push_back()
    // cout<<v.size()<<endl;// this is a function which prints the size of the vector--> this means that it will count he number of elements present in it  
    cout<<v.capacity()<<endl;// this function will print the capacity of the vector--> this means that it will print the number of slots present for the element insertion
    v.push_back(2);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(7);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<endl;
    // }
}