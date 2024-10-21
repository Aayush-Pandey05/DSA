#include<iostream>
using namespace std;
int main(){
    int n, product=1;
    cout<<"Enter the number of which you want the factorial:- ";
    cin>>n;
    for(int i=1; i<=n; i++){
        product *= i;
    }
    cout<<"factorial of "<<n<<" is:- "<<product;
}