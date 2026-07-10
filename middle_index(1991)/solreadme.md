# Find Middle Index in Array

## Problem Explanation

The goal is to find an index in an array where the sum of all elements on the left side of the index is equal to the sum of all elements on the right side.

The element at the middle index itself is not included in either side.

If no such index exists, the function returns `-1`.

---

## Approach

The solution uses the concept of total sum and left sum.

1. First, calculate the total sum of all elements in the array.
2. Traverse the array from left to right.
3. For every index:
   - Calculate the right sum by subtracting the current element and the left sum from the total sum.
   - Compare the left sum and right sum.
   - If both are equal, the current index is the middle index.
4. After checking the current index, add its value to the left sum and continue.
5. If no index satisfies the condition, return `-1`.

---

## C++ Solution Explanation

In the C++ implementation, the total sum of the array is calculated first.

During the traversal:
- The variable `left` keeps track of the sum of elements before the current index.
- The right sum is calculated using the total sum.
- When the left and right sums become equal, the current index is returned.

This avoids creating an additional prefix sum array and uses constant extra memory.

### Complexity Analysis

- Time Complexity: **O(n)**  
  The array is traversed only once after calculating the total sum.

- Space Complexity: **O(1)**  
  Only a few variables are used, regardless of the input size.

---

## Python Solution Explanation

The Python implementation follows the same approach.

The variable `total` stores the sum of all elements in the array.

While iterating through the array:
- `left` stores the accumulated sum of elements before the current position.
- `right` is calculated by removing the current element and left sum from the total sum.
- If both sides are equal, the current index is the required middle index.

This approach is efficient because it does not require storing extra prefix or suffix arrays.

### Complexity Analysis

- Time Complexity: **O(n)**  
  Each element is processed a constant number of times.

- Space Complexity: **O(1)**  
  Only variables for sums and indexes are used.

---

## Key Idea

Instead of calculating the left and right sums separately for every index, we calculate the total sum once and update the left sum while traversing. This makes the solution faster and memory efficient.