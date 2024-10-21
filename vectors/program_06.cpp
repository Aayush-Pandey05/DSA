/*
Question:- find the last occurence of x in the array/vector
*/



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int x,a;
    cout<<"Enter the value of x:- ";
    cin>>x;
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    v.push_back(8);
    v.push_back(6);
    v.push_back(5);
//     for(int i=0; i<v.size(); i++){ This is one method to do this question
//         if(v[i]==x){
//             a = i;
//         }
//     }
//     cout<<"The last occurence of x was on the index:- "<<a;

//    METHOD 2:- {we will make use of break statement}

    for(int i = v.size()-1; i>=0; i--){// this will check the vector from the back and look for the element x
        if(v[i]==x){
            cout<<"The last occurence of x is:- "<<i;
            break;
        }
    }
}