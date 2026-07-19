#include<bits/stdc++.h>
using namespace std;
int subarray(vector<int>&nums,int k){
    unordered_map<int ,int>mp;
    mp[0] =1;
    int prefixsum = 0;
    int ans = 0;
    for(int i:nums){
        prefixsum += i;
        if(mp.find(prefixsum-k)!=mp.end()){
            ans += mp[prefixsum-k];
        }
        mp[prefixsum]++;

    }
    return ans;

}
int main(){
    vector<int>nums ={ 1,1,1};
     int subs= subarray(nums,2);
     cout<<subs<< " ";
    
    return 0;
}