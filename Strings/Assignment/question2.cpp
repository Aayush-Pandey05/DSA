#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "2947578";
    char mx = '0';
    for(int i=0; i<str.length(); i++){
        if(str[i] > mx){
            mx = str[i];
        }
    }
    char mx2 = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i]>mx2 && str[i]!=mx){
            mx2 = str[i];
        }
    }
    cout<<mx2;
}