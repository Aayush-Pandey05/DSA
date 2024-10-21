#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int> &v){
    sort(v.begin(),v.end());
}

int main(){
    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(6);
    arr1.push_back(52);
    arr1.push_back(85);
    arr1.push_back(12);
    arr1.push_back(48);
    arr1.push_back(93);
    arr1.push_back(43);
    arr2.push_back(8);
    arr2.push_back(52);
    arr2.push_back(21);
    arr2.push_back(33);
    arr2.push_back(45);
    sort(arr1);
    sort(arr2);
    display(arr1);
    display(arr2);
    int n=arr1.size(), m = arr2.size();
    vector<int> arr(n+m);
    int i =0, k= 0, j=0;
    while(k<arr.size()){
        if(arr1[i]<=arr2[j] && i<arr1.size() && j<arr2.size()){
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else if(arr1[i]>=arr2[j] && i<arr1.size() && j<arr2.size()){
            arr[k]=arr2[j];
            j++;
            k++;
        }
        else if(i>=arr1.size()){
            arr[k] = arr2[j];
            k++;
            j++;
        }
        else{
            arr[k] = arr1[i];
            i++;
            k++;
        }
    }
    display(arr);
}