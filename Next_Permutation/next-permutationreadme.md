# 📌 Next Permutation (LeetCode)

## 🧩 Problem Statement
Given an array of integers, rearrange it into the **next lexicographically greater permutation**.  
If such arrangement is not possible, rearrange it into the **lowest possible order (sorted ascending)**.

The solution must be done **in-place** with O(1) extra space.

---

## 💡 Approach / Idea

To find the next permutation:

### 1. Find Pivot
Traverse from right to left and find the first index `i` such that:
- `nums[i] < nums[i+1]`

If no such index exists → array is in descending order → reverse the entire array.

---

### 2. Find Next Greater Element
From the right side, find the first element that is greater than `nums[i]`.  
Swap it with the pivot.

---

### 3. Reverse Suffix
After swapping, the right part is still in decreasing order.  
Reverse it to get the smallest possible order.

