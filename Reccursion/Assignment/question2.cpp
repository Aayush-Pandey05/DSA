#include<iostream>
using namespace std;

int reverse (int n, int rev){
    if(n == 0) return rev;
    rev = rev * 10 + n % 10;
    return reverse(n / 10, rev);
    
}

int main() {
    int ans = reverse(1234, 0);
    cout << ans << endl; // Output: 4321
}