#include<iostream>
using namespace std;
int main(){
    int amount, count_500=0, count_200=0, count_100=0, count_50=0, count_20=0, count_10=0;
    cout<<"Enter the amount:- ";
    cin>>amount;
    switch(amount>=500){
        case 1:
            count_500 = amount/500;
            amount %= 500;
    }
    switch(amount>=200){
        case 1:
            count_200 = amount/200;
            amount %= 200;
    }
    switch(amount>=100){
        case 1:
            count_100 = amount/100;
            amount %= 100;
    }
    switch(amount>=50){
        case 1:
            count_50 = amount/50;
            amount %= 50;
    }
    switch(amount>=20){
        case 1:
            count_20 = amount/20;
            amount %= 20;
    }
    switch(amount>=10){
        case 1:
            count_10 = amount/10;
            amount %= 10;
    }
    if(count_500 != 0)
        cout<<"The number of 500 notes= "<<count_500<<endl;
    if(count_200 != 0)
        cout<<"The number of 500 notes= "<<count_200<<endl;
    if(count_100 != 0)
        cout<<"The number of 100 notes= "<<count_100<<endl;
    if(count_50 != 0)
        cout<<"The number of 50 notes= "<<count_50<<endl;
    if(count_20 != 0)
        cout<<"The number of 210 notes= "<<count_20<<endl;
    if(count_10 != 0)
        cout<<"The number of 10 notes= "<<count_10<<endl;

    return 0;
}