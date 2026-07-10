# 1480. Running Sum of 1d Array

## Problem Statement

Given an array `nums`, return the **running sum** of the array.

The running sum of an array is defined as:

```text
runningSum[i] = nums[0] + nums[1] + ... + nums[i]
```

In other words, each element in the output array contains the sum of all the elements from the beginning of the array up to that index.

---

## Example 1

### Input

```text
nums = [1,2,3,4]
```

### Output

```text
[1,3,6,10]
```

### Explanation

```text
runningSum[0] = 1
runningSum[1] = 1 + 2 = 3
runningSum[2] = 1 + 2 + 3 = 6
runningSum[3] = 1 + 2 + 3 + 4 = 10
```

---

## Example 2

### Input

```text
nums = [1,1,1,1,1]
```

### Output

```text
[1,2,3,4,5]
```

---

## Approach

This problem is a direct application of the **Prefix Sum** technique.

Instead of creating a new array, we update each element by adding the previous running sum.

For every index starting from `1`:

```text
nums[i] = nums[i] + nums[i-1]
```

Since `nums[i-1]` already stores the running sum up to the previous index, adding it to `nums[i]` gives the running sum up to the current index.

---

## Dry Run

### Input

```text
nums = [1,2,3,4]
```

### Step 1

```text
i = 1

nums[1] = nums[1] + nums[0]
        = 2 + 1
        = 3

Array:
[1,3,3,4]
```

---

### Step 2

```text
i = 2

nums[2] = nums[2] + nums[1]
        = 3 + 3
        = 6

Array:
[1,3,6,4]
```

---

### Step 3

```text
i = 3

nums[3] = nums[3] + nums[2]
        = 4 + 6
        = 10

Array:
[1,3,6,10]
```

---

## Algorithm

1. Traverse the array from index `1`.
2. Add the previous element to the current element.
3. Store the result back in the current position.
4. Continue until the end of the array.
5. Return the modified array.

---

## Why This Works

Each element stores the cumulative sum up to that index.

For example:

```text
nums = [5,2,8,1]
```

After processing:

```text
[5,7,15,16]
```

Because:

```text
5
5 + 2 = 7
5 + 2 + 8 = 15
5 + 2 + 8 + 1 = 16
```

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

The array is traversed exactly once.

### Space Complexity

```text
O(1)
```

The running sum is computed in-place without using any extra array.

---

## Key Learning

- Running Sum is one of the simplest applications of the **Prefix Sum** concept.
- It helps understand how cumulative sums are built.
- This technique is widely used in range sum queries, subarray problems, and many other array-based algorithms.

---

## Takeaway

Whenever a problem asks for the cumulative sum from the beginning of an array to each index, think of the **Running Sum (Prefix Sum)** technique.