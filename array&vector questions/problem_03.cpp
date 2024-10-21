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
        if(a[i] == 0) i++;
        if(a[j] == 1) j--;
        else if(a[i] == 1 && a[j] == 0){
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
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    display(v);
    sort(v);
    display(v);
}