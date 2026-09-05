#include<bits/stdc++.h>
using namespace std;
int Solution(vector<int>&prices){
    int profit = 0;
    int n = prices.size();
    int min_p = prices[0];
    for(int i = 0;i<n;i++){
        int cost = prices[i]-min_p;
        profit = max(profit,cost);
        min_p = min(min_p,prices[i]);
    }
    return profit;
}
int main(){
    vector<int>prices = {7,1,5,3,6,4};
    int result = Solution(prices);
    cout<<result;
}