#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
    string s = "raghav is a maths teacher. He is a DSA mentor as well!";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end()); // sort karne ke baad saare same words saath aajayenge 
    int max = 1;
    int count = 1;
    for(int i =0 ; i<v.size(); i++){
        if(v[i] == v[i+1]){
            count++;
        }
        else{
            count=1;
        }
        max = fmax(max, count);
    }
    for(int i =0 ; i<v.size(); i++){
        if(v[i] == v[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count == max){
            cout<<v[i]<<" "<<max<<endl;
        }
    }
}