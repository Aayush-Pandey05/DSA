#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {19,12,23,8,16};
    int n = 5;
    vector<int> brr(n, 0);
    int count = 0;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        
        int min = INT_MAX;
        int min_index = -1;
        
        for(int j = 0; j<n; j++){
            if(brr[j] == 1) continue;
            else{
                if(arr[j] < min){
                    min = arr[j];
                    min_index = j;
                }
            }
        }

        arr[min_index] = count;
        brr[min_index] = 1;
        count++;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";

    }
}