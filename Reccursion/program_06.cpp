#include<iostream>
using namespace std;

int power(int a, int b){
    if(b == 0) return 1;
    return a * power(a,b-1);
}

int main(){
    int ans = power(2, 3);
    cout << ans; // Output: 8
    return 0;
}