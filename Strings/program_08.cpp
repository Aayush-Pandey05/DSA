#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s = "leetcode";
    vector<int> arr(26,0);
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        int ascii = (int)ch; // typecasting
        arr[ascii-97]++;
    }

    int max = 0;
    for(int i =0 ; i<arr.size(); i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == max){
            char ch = (char)(i+97);
            cout<<ch<<" "<<max;
        }
    }
}