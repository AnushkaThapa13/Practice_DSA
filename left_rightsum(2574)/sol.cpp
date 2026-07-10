#include <bits/stdc++.h>
using namespace std;

vector<int> Left_RightSum(vector<int>& nums) {
    int total = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        total += nums[i];
    }

    vector<int> left(n, 0);
    int leftsum = 0;
    for (int i = 0; i < n; i++) {
        left[i] = leftsum;
        leftsum += nums[i];
    }

    vector<int> right(n);
    for (int i = 0; i < n; i++) {
        right[i] = total - left[i] - nums[i];
    }

    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        temp[i] = abs(left[i] - right[i]);
    }

    return temp;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    vector<int> ans = Left_RightSum(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}