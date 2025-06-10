#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    int lo = 0;
    bool flag = false;
    int hi = n/2;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(mid*mid == n){
            flag = true;
            break;
        } 
        else if(mid*mid < n){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    if(flag){
        cout<<n<<" is a perfect square"<<endl;
    }
    else{
        cout<<n<<" is not a perfect squarre";
    }
}