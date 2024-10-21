#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,32,43,45,5,6,6,7,8,95,34,45};
    int n = sizeof(arr)/sizeof(arr[0]);// This will give us the number of the elements present in the array
    // size of whole array will be divided by 4 bytes(i.e, the size of one element of the array) and hence we will 
    // get the number of elements in the array 
    cout<<"The number of elements in the array:- "<<n;
}