#include<iostream>
using namespace std;
int main(){
    int arr[6]= {1, 3, 4, 5, 7, 98};
    int sum = 0;
    for(int i = 0; i<6; i++){
        sum += arr[i];
    }
    cout<<"The sum of all the elements of the array is:- "<<sum;
}