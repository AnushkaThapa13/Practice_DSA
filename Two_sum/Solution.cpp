#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(int n, int arr[], int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {

        int r = target - arr[i];

        if (mp.find(r) != mp.end()) {
            return {mp[r], i};
        }

        mp[arr[i]] = i;
    }

    return {};
}

int main() {

    int n = 5;
    int arr[n];

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    vector<int> ans = twosum(n, arr, target);

    if (!ans.empty()) {
        cout << "Indices are: " << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No pair found.";
    }

    return 0;
}