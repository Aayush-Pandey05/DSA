#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int> &a){
    int i = 0, j = a.size()-1;
    while(i<j){
        if(a[i] < 0) i++;
        if(a[j] > 0) j--;
        else if(a[i] > 0 && a[j] < 0){
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
        
    
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(4);
    v.push_back(9);
    v.push_back(-5);
    v.push_back(7);
    v.push_back(-7);
    v.push_back(-9);
    display(v);
    sort(v);
    display(v);
}