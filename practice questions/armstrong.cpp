#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=500; i++){
        int x = i;
        int sumCube = 0;
        while(x!=0){
            int ld = x%10;
            sumCube += (ld*ld*ld);
            x /= 10;
        }
        if(i == sumCube){
            cout<<i<<endl;
        }
    }
}