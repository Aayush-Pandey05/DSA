#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reversePart(int x, int y, vector<int> &v){
    for(int i=x, j=y; i<=j; i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    int n = nums.size();
    int idx=-1;
    for(int i = n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        sort(nums.begin(),nums.end());
    }
    else{
        reversePart(idx+1, n-1, nums);
        int i = idx, j=idx+1, temp;
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    for(int i=0; i<n; i++){
        cout<<nums[i]<<",";
    }
}