#include<iostream>
using namespace std;
int main(){
    char ch, ch2;
    cout<<"Enter the first letter:- ";
    cin>>ch;
    cout<<"Enter the second letter:- ";
    cin>>ch2;
    int value1 = int(ch);
    int value2 = int(ch2);
    cout<< value1<<" "<<value2;
    int diff = value2-value1;
    cout<<"The difference between thew ascii values of the given charecters is:-  "<<diff;
    return 0;
}