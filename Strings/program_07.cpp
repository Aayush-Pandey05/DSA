#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int max = INT16_MIN;
    for(int i=0; i<s.length(); i++){
        int count =0;
        if(s[i]==s[i+1]){
            count++;
        }
        max = fmax(count, max);
    }
    cout<<max;
}