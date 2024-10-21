#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int arr[6]={1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        if(arr[i]==x){
            cout<<"The key is present in the "<<i+1<<"th position";
        }
    }
}