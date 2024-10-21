/* Question:- find out if the given sides can be the sides of a triangle 

Explaination:- the sum of two sides should always be greater than the third side

*/

#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cout<<"Enter the sides of the triangle:- ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"The sides can make a triangle";
    }
    else{
        cout<<"The sides cannot make a triangle";
    }
    return 0;
}