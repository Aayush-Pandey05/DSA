#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "aayush";
    cout<<s<<endl;
    int n = s.length()/2;
    reverse(s.begin(), s.begin()+n);
    cout<<s<<endl;
}