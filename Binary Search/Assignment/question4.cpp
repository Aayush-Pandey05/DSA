#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4};
    int n = 5;
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid] != mid+1){
            ans = arr[mid];
            break;
        }
        else{
            lo = mid + 1;
        }
    }
    cout<<ans;
}