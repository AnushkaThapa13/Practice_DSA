# Subarray Sum Equals K

## Problem Statement

Given an integer array `nums` and an integer `k`, return the total number of continuous subarrays whose sum equals `k`.

**Example:**

```text
Input:
nums = [1,1,1]
k = 2

Output:
2
```

---

## Approach

This solution uses the **Prefix Sum + Hash Map** technique.

### Key Idea

Let:

- `prefixSum` = sum of elements from index `0` to `i`.

If a subarray from `j + 1` to `i` has sum `k`, then:

```text
prefixSum[i] - prefixSum[j] = k
```

Rearranging,

```text
prefixSum[j] = prefixSum[i] - k
```

So, while traversing the array:

1. Maintain the current prefix sum.
2. Check if `(prefixSum - k)` has already occurred.
3. If yes, add its frequency to the answer.
4. Store the current prefix sum in the hash map.

---

## Algorithm

1. Initialize a hash map with `{0 : 1}`.
2. Set `prefixSum = 0` and `answer = 0`.
3. Traverse the array:
   - Add the current element to `prefixSum`.
   - If `(prefixSum - k)` exists in the map, add its frequency to `answer`.
   - Increment the frequency of `prefixSum`.
4. Return `answer`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

where `n` is the number of elements in the array.

---

## C++ Solution

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int prefixSum = 0;
        int ans = 0;

        for (int num : nums) {
            prefixSum += num;

            if (mp.find(prefixSum - k) != mp.end()) {
                ans += mp[prefixSum - k];
            }

            mp[prefixSum]++;
        }

        return ans;
    }
};
```

---

## Dry Run

### Input

```text
nums = [1,1,1]
k = 2
```

| Element | Prefix Sum | Prefix Sum - k | Matches | Answer |
|---------:|-----------:|---------------:|--------:|-------:|
| 1 | 1 | -1 | 0 | 0 |
| 1 | 2 | 0 | 1 | 1 |
| 1 | 3 | 1 | 1 | 2 |

Final Answer:

```text
2
```

---

## Concepts Used

- Prefix Sum
- Hash Map (`unordered_map`)
- Array Traversal
- Frequency Counting

---

## LeetCode

**Problem:** 560. Subarray Sum Equals K

**Difficulty:** Medium
