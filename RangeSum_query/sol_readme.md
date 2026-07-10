# 303. Range Sum Query - Immutable

## Problem Statement

Given an integer array `nums`, handle multiple queries of the following type:

- Return the **sum of the elements** of `nums` between indices `left` and `right` (inclusive), where `left <= right`.

Implement the `NumArray` class:

- `NumArray(int[] nums)` Initializes the object with the integer array `nums`.
- `sumRange(int left, int right)` Returns the sum of the elements from index `left` to `right` (inclusive).

---

## Example

### Input

```text
nums = [-2, 0, 3, -5, 2, -1]

Queries:
sumRange(0, 2)
sumRange(2, 5)
sumRange(0, 5)
```

### Output

```text
1
-1
-3
```

### Explanation

```text
sumRange(0,2)
= -2 + 0 + 3
= 1

sumRange(2,5)
= 3 + (-5) + 2 + (-1)
= -1

sumRange(0,5)
= -2 + 0 + 3 + (-5) + 2 + (-1)
= -3
```

---

# Approach

Since there can be multiple range sum queries, calculating the sum every time by iterating through the array would take **O(n)** per query.

Instead, we preprocess the array once using the **Prefix Sum** technique.

---

# Prefix Sum

A prefix sum array stores the cumulative sum from the beginning of the array up to each index.

Example:

```text
nums = [1, 2, 3, 4, 5]

prefix[0] = 1
prefix[1] = 1 + 2 = 3
prefix[2] = 1 + 2 + 3 = 6
prefix[3] = 1 + 2 + 3 + 4 = 10
prefix[4] = 1 + 2 + 3 + 4 + 5 = 15
```

Final Prefix Array:

```text
Index : 0  1  2   3   4
Value : 1  3  6  10  15
```

---

# How Range Sum is Calculated

Suppose we want the sum from index `left` to `right`.

### Case 1

If `left == 0`

The required sum is simply:

```text
prefix[right]
```

Example:

```text
sumRange(0,3)

= 1+2+3+4

= prefix[3]
```

---

### Case 2

If `left > 0`

Subtract the prefix sum before the left index.

Formula:

```text
Sum(left, right)
= prefix[right] - prefix[left-1]
```

Example:

```text
nums = [1,2,3,4,5]

prefix = [1,3,6,10,15]

sumRange(1,3)

= prefix[3] - prefix[0]

= 10 - 1

= 9
```

Which is:

```text
2 + 3 + 4 = 9
```

---

# Dry Run

Input:

```text
nums = [-2,0,3,-5,2,-1]
```

Building Prefix Sum:

```text
prefix[0] = -2

prefix[1] = -2

prefix[2] = 1

prefix[3] = -4

prefix[4] = -2

prefix[5] = -3
```

Final Prefix Array:

```text
[-2, -2, 1, -4, -2, -3]
```

### Query 1

```text
sumRange(0,2)

= prefix[2]

= 1
```

---

### Query 2

```text
sumRange(2,5)

= prefix[5] - prefix[1]

= -3 - (-2)

= -1
```

---

### Query 3

```text
sumRange(0,5)

= prefix[5]

= -3
```

---

# Why Prefix Sum?

Without Prefix Sum:

- Each query takes **O(n)** time.

With Prefix Sum:

- Build the prefix array once in **O(n)**.
- Every query is answered in **O(1)** time.

This makes the solution much more efficient when there are many range sum queries.

---

# Complexity Analysis

### Time Complexity

Building Prefix Sum:

```text
O(n)
```

Each Query:

```text
O(1)
```

---

### Space Complexity

```text
O(n)
```

An additional array is used to store the prefix sums.

---

# Key Learning

- Prefix Sum is used for answering multiple range sum queries efficiently.
- Preprocessing the array once reduces each query from **O(n)** to **O(1)**.
- Whenever a problem asks for repeated sums over subarrays, Prefix Sum is often the optimal approach.