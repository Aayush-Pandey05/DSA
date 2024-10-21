#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr; /* we can't write &arr because arr itself passes the address
    isted we can pass the address of its elements like:- *ptr = &arr[0]
    */ 
   for(int i = 0; i<5; i++){// this is the way to print the values of an array using pointers
    cout<<*ptr<<" ";
    ptr++;// this will move the pointer variable to the next address of the array element
   }
}