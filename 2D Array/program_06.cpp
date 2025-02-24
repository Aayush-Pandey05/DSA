// question:- rotate the array by 90 degrees 



#include<iostream>
using namespace std;
int main(){
    int arr[3][3]= {1,2,3,4,5,6,7,8,9};
    //print the matrix:- 
    for(int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //step 1:- take the transpose of the matrix -->
    for(int i=0; i<3; i++){
        for(int j = i+1; j<3; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //step2:- reverse the elements of each row:- 
    for(int i=0; i<3; i++){
        int j = 0;
        int k = 2;
        while(j<=k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k]; // here i is the row number and j and k represents the column numbers
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    // now print again:- 
    for(int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}