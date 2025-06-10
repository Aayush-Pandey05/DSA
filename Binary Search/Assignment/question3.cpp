#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int n = 4;
    int row = 0;
    int m = 4;
    int max = -1;
    for(int i =0; i<m; i++){
        int lo = 0;
        int count = 0;
        int hi = n-1;
        int first = -1;
        while(lo <=hi){
            int mid = lo+ (hi-lo)/2;
            if(arr[i][mid] == 1){
                if(mid>0 && arr[i][mid-1] == 1){
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
        if(first != -1) count = n-first;

        if(max<count){
            max = count;
            row = i;
        }
    }

    cout<<row<<" "<<max;
    
}