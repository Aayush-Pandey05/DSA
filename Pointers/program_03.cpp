#include<iostream>
using namespace std;

void swap(int *x, int *y){ // passing the adresses of x and y in the poiter variables
    int temp;
    temp = *x; //making the changes in the address itself
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int x, y;
    cout<<"Enter the first number:- ";
    cin>>x;
    cout<<"Enter the second number:- ";
    cin>>y;
    cout<<"Before swapping:- "<<x<<" "<<y<<endl;
    swap(&x, &y);
    cout<<"After swapping:- "<<x<<" "<<y;
}