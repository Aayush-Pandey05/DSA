/* 100 is not a leap year it is a century year, the leap year should be divisible by 400 */

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year:- ";
    cin>>year;
    if((year%4 == 0 && year%100 != 0) || (year%400== 0)){
        cout<<"The given year is a leap year";
    }
    else{
        cout<<"The given year is not a leap year ";
    }
}