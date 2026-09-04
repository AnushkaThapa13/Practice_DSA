#include <bits/stdc++.h>
using namespace std;

void Longest_Subarray_K(vector<int> nums, int k) {
    int n = nums.size();

    int maxlen = 0;
    int left = 0;
    int right = 0;
    int sum = 0;

    int start = 0;
    int end = 0;

    while (right < n) {
        sum += nums[right];

        while (sum > k && left <= right) {
            sum -= nums[left];
            left++;
        }

        if (sum <= k) {
            int len = right - left + 1;

            if (len > maxlen) {
                maxlen = len;
                start = left;
                end = right;
            }
        }

        right++;
    }

    cout << "Maximum length: " << maxlen << endl;

    cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums = {1, 2, 1, 1, 3, 2, 1};
    int k = 5;

    Longest_Subarray_K(nums, k);

    return 0;
}