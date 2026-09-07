#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int id = 0;
        vector<int>temp(m+n);
        while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                temp[id++]  = nums1[i++];
            }
            else{
                temp[id++] = nums2[j++];
            }
        }
        while(i<m){
            temp[id++] = nums1[i++];
        }
        while(j<n){
            temp[id++] = nums2[j++];
        }
        nums1 = temp;
    }
};

int main() {
    Solution solver;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    solver.merge(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl; // Expected: 1 2 2 3 5 6

    return 0;
}