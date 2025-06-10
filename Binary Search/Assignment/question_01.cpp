#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,1,1};
    int n = 4;
    int lo = 0;
    int hi = n-1;
    int first;
    while(lo <=hi){
        int mid = lo+ (hi-lo)/2;
        if(arr[mid] == 1){
            if(mid>0 && arr[mid-1] == 1){
                hi = mid-1;
            }
            else{
                first = mid;
                break;
            }
        }
        else{
            lo = mid+1;
        }
    }
    cout<<n-first;
}