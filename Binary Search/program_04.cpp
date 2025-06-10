#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,2,2,3,3,3,3,3,4,4,5,5,9};
    int n = arr.size();
    int x = 3;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            if(arr[mid-1] == x){
                hi = mid-1;
            }
            else{
                flag = true;
                cout<<mid<<endl;
                break;
            }
        }
        else if(arr[mid] > x) hi = mid-1;
        else lo = mid+1;
    }
    if(flag == false) cout<<-1;
}