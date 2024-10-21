#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[]){
    b[0] = 100;
    for(int i=0; i<5; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    display(arr);
    change(arr);
    display(arr); /* this will print the same result as change function because 
    arrays follow call by referance that means the address of array is being 
    passed to the function which will permenantly change the value at any index*/
}