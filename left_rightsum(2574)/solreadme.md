# Left Right Sum Difference

This C++ and python program calculates the **absolute difference between the sum of elements to the left and the sum of elements to the right** for every element in an array.

## Problem Statement

Given an integer array `nums`, return an array `answer` such that:

- `leftSum[i]` is the sum of all elements to the left of index `i`.
- `rightSum[i]` is the sum of all elements to the right of index `i`.
- `answer[i] = |leftSum[i] - rightSum[i]|`

## Example

### Input

```cpp
nums = {1, 2, 3, 4, 5}
```

### Output

```cpp
14 11 6 1 10
```

## Approach

1. Calculate the total sum of the array.
2. Create a `left` array to store prefix sums.
3. Compute the `right` sum for each index using:
   ```
   right[i] = totalSum - left[i] - nums[i]
   ```
4. Calculate the absolute difference:
   ```
   answer[i] = abs(left[i] - right[i])
   ```

## Time Complexity

- **O(n)**

## Space Complexity

- **O(n)**

## Technologies Used

- in C++
- STL (`vector`)
- Prefix Sum Technique


