#include<bits/stdc++.h>
using namespace std;
void next_permutation(vector<int>&nums){
    int temp = -1;
    int n = nums.size();
    for(int i =n-2;i>0;i--){
        if(nums[i]<nums[i+1]){
            temp = i;
            break;
        }

    }
    if(temp == -1){
        reverse(nums.begin(),nums.end());
    }
    for (int i =n-1;i>temp;i++){
        if(nums[i]>nums[temp]){
            swap(nums[i],nums[temp]);
            break;

        }
    }
    reverse(nums.begin()+temp+1,nums.end());
}
int main(){
    vector<int>num = {1,2,3};
    next_permutation(num);
    for(int x: num){
        cout<< x<< "  ";
    }
    return 0;
}