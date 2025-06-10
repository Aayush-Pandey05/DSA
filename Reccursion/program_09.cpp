#include<iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>er) return 0;
    if(sr == er && sc == ec) return 1;
    int right = maze(sr, sc+1, er, ec);
    int down = maze(sr+1, sc, er, ec);
    return right + down;
}

int main(){
    int ans = maze(0,0,2,2);
    cout << ans; // Output: 6
    return 0;
}