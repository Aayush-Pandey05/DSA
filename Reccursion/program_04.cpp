#include<iostream>
using namespace std;

void sum(int i, int n){
    if(n == 1){
        cout<<i<<endl;
        return;
    }
    sum(i+n, n-1);
}
int main(){
    sum(1, 5);
}