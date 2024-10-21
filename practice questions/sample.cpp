#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int digit;
    long long  rev=0;
    while(x!=0){
        digit = x%10;
        rev = rev*10 + digit;
        x = x/10;
    }
    
}