#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4,4,4,5};
    int x = 3;
    int n = 8;
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            if(arr[mid+1] == x){
                lo = mid+1;
            }
            else{
                ans = mid;
                break;
            }
        }
        else if(arr[mid] < x){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    if(ans == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Last occurrence of "<<x<<" is at index "<<ans<<endl;
    }
}