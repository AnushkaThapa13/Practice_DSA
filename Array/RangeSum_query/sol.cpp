#include<bits/stdc++.h>
using namespace std;
class NumArray{
    public:
    vector<int>prefix;

    NumArray(vector<int>&nums){
        prefix = nums;
        for(int i = 1;i<prefix.size();i++ ){
            prefix[i] = prefix[i-1]+prefix[i];

        }
    }

    int sumRange(int left ,int right){
        if (left == 0){
            return prefix[right];
        }
        else {
            return prefix[right]-prefix[left-1];
        }
    }



};
int main(){
    vector<int>nums = {-2, 0, 3, -5, 2, -1};
    NumArray obj(nums);


    cout << "sumRange(0,2) = " << obj.sumRange(0, 2) << endl;
    cout << "sumRange(2,5) = " << obj.sumRange(2, 5) << endl;
    cout << "sumRange(0,5) = " << obj.sumRange(0, 5) << endl;

 
    return 0;
}