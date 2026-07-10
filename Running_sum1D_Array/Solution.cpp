#include<bits/stdc++.h>
using namespace std;
void RunningSum(vector<int>&nums,int n){
    for(int i =1;i<n;i++){
        nums[i] = nums[i-1]+nums[i];
    }
    
}
int main(){
    vector<int>nums = {1,2,3,4,5};
    int  n = nums.size();
    RunningSum(nums,n);
    for(int x : nums){
        cout<< x<<" ";
    }
    return 0;
}