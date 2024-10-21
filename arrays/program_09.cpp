#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[5]={1,2,3,45,64}, mx = INT16_MIN, mx2 = INT16_MIN;
    for(int i=0; i<5; i++){
        mx = max(mx,arr[i]);
    }
    for(int i=0; i<5; i++){
        if(arr[i]!=mx){
            mx2 = max(mx2, arr[i]);
        }
    }
    cout<<"The largest number in the array is:- "<<mx<<endl;
    cout<<"The second largest number in the array is:- "<<mx2<<endl;
}