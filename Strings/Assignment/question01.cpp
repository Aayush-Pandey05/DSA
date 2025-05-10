#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s = "pw";
    string p = s;
    reverse(s.begin(), s.end());
    cout<<p+s<<endl;
}