#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        for(int x:nums){
            if(x<0){
                n.push_back(x*x);
            }
            else{
                p.push_back(x*x);
            }
        }
        reverse(n.begin(),n.end());
        int i =0;
        int j = 0;
        int id = 0;
        int s = nums.size();
        vector<int>temp(s);
        while(i<p.size()&&j<n.size()){
            if(p[i]<=n[j]){
                temp[id++] = p[i++];
            }
            else{
                temp[id++] = n[j++];
            }
        }
        while(i<p.size()){
            temp[id++] = p[i++];
        }
        while(j<n.size()){
            temp[id++] = n[j++];
        }
        return temp;
    }
};

int main() {
    Solution solver;
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> result = solver.sortedSquares(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl; // Expected: 0 1 9 16 100

    return 0;
}