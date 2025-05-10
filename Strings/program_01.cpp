#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Aayush";
    int i = 0;
    int count = 0;
    while(i<=5){
        if(s[i]=='a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
            count++;
        }
        i++;
    }
    cout<<count;
}