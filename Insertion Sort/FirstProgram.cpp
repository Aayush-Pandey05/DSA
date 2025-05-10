#include<iostream>
using namespace std; 
int main() {
    int arr[] = {5,3,2,1,4};
    int n = 5;

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 1; i<n; i++){
        int j = i;
        // while(j>=1){
        //     if(arr[j]>arr[j-1]) break;
        //     if(arr[j]<arr[j-1]){
        //         swap(arr[j], arr[j-1]);
        //     }
        //     j--;
        // }
    
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;   
        }
    
    }


    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// why do we use insertion sort:-
// -> we use insertion sort because its best case time complexity is O(n) without using any boolean checkmarks 
