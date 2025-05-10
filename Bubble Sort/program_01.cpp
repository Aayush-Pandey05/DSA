// Bubble Sort Algorithm:-

#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    bool flag = true;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = false;
            }

            if(flag == true){ // swap didn't happen
                break;
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity:- O(n^2)
// Space Complexity:- O(1)