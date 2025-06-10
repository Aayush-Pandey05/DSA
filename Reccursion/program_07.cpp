// Stair Path

#include<iostream>
using namespace std;

int stair(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    return stair(n-1) + stair(n-2);
}

int main(){
    int ans = stair(5);
    cout << ans; // Output: 8
    return 0;
}