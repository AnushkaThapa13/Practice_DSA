#include<bits/stdc++.h>
using  namespace std;
void Solution(vector<int>&arr){
    int n = arr.size();
    int sum = 0;
    int mx = INT_MIN;
    for(int i =0;i<n;i++){
        sum+=arr[i];
        if(sum>mx){
            mx = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    cout<<mx;
}
int main(){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    Solution(arr);
    return 0;
}