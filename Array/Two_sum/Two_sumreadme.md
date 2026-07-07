# Two Sum - C++ Solution

## 📌 Problem Statement

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input has **exactly one solution**, and you may not use the same element twice.

### Example

**Input**

```text
nums = [1, 2, 3, 4, 5]
target = 5
```

**Output**

```text
[1, 2]
```

**Explanation**

```
nums[1] + nums[2] = 2 + 3 = 5
```

---

# Approach

This solution uses an **unordered_map (Hash Map)** to store the numbers that have already been visited along with their indices.

For every element in the array:

1. Calculate the required number needed to reach the target.
2. Check whether that required number already exists in the hash map.
3. If it exists, return both indices.
4. Otherwise, store the current number and its index in the hash map.

---

# Algorithm

1. Create an empty `unordered_map<int, int>`.
2. Traverse the array from left to right.
3. Compute:

```cpp
required = target - nums[i];
```

4. If `required` exists in the map:

   * Return the stored index and the current index.
5. Otherwise:

   * Store the current number and its index.
6. Continue until the pair is found.

---

# Time Complexity

* **Average Case:** `O(n)`
* Each element is visited once.
* Hash map lookup takes `O(1)` on average.

---

# Space Complexity

* **O(n)**

The hash map stores at most `n` elements.

---

# Key Concept

The hash map stores:

```text
Number -> Index
```

Example:

```text
1 -> 0
2 -> 1
3 -> 2
```

If the current number is `3` and the target is `5`:

```text
Required = 5 - 3 = 2
```

The algorithm checks whether `2` already exists in the map.

If it does, the pair has been found.

---

# Dry Run

Array:

```text
[1, 2, 3, 4, 5]
```

Target:

```text
5
```

| Current Number | Required | Hash Map Before | Action              |
| -------------- | -------- | --------------- | ------------------- |
| 1              | 4        | {}              | Store (1 → 0)       |
| 2              | 3        | {1 → 0}         | Store (2 → 1)       |
| 3              | 2        | {1 → 0, 2 → 1}  | Found! Return {1,2} |

---

# C++ Concepts Used

* `unordered_map`
* Arrays
* Vectors
* Functions
* Loops
* Hashing
* Time Complexity Optimization

---

# Output Example

```text
Enter array elements:
1 2 3 4 5

Enter target:
5

Indices are:
1 2
```

---

# Learning Outcome

This problem demonstrates:

* Efficient searching using a Hash Map.
* Reducing time complexity from **O(n²)** (Brute Force) to **O(n)**.
* Storing key-value pairs using `unordered_map`.
* Understanding how complement-based searching works.

---

## Author

**Anushka Thapa**

Learning Data Structures & Algorithms using C++ and Python🚀
