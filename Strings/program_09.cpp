#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "Aayush Pandey is hot";
    stringstream ss(str); // stringstream is used to split the string with the words (it will ignore the spaces)
    string temp;

    while(ss>>temp){ // this signifies that we are taking input from ss into temp 
        cout<<temp<<endl; // this will print the words in the string one by one
    }

}