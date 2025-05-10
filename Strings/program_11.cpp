#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<string> str = {"0123", "0023","456","00182","940","2901"};
    int max = 0;
    for(int i = 0; i<str.size(); i++){
        int x = stoi(str[i]);
        max = fmax(x, max);
    }
    cout<<max;
}