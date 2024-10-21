#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[5] = {12,43,634,6,32}, mn=INT16_MAX;
    for(int i=0; i<5; i++){
        mn= min(mn, arr[i]);
    }
    cout<<"The smallest element in the given array is:- "<<mn;
}