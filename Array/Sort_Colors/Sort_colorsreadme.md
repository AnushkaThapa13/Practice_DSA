# Sort Colors (Dutch National Flag Algorithm)

## 📌 Problem Statement

Given an array containing only `0`s, `1`s, and `2`s, sort the array in ascending order **without using any built-in sorting algorithm**.

### Example

**Input**

```cpp
arr = {1, 2, 0, 0, 1}
```

**Output**

```cpp
0 0 1 1 2
```

---

## 🚀 Approach

This solution uses the **Dutch National Flag Algorithm**, which sorts the array in a single traversal using three pointers:

* **low** → Points to the next position where `0` should be placed.
* **mid** → Traverses the array.
* **high** → Points to the next position where `2` should be placed.

### Algorithm

1. Initialize:

   * `low = 0`
   * `mid = 0`
   * `high = n - 1`
2. Traverse while `mid <= high`:

   * If `arr[mid] == 0`

     * Swap `arr[low]` and `arr[mid]`
     * Increment both `low` and `mid`
   * If `arr[mid] == 1`

     * Increment `mid`
   * If `arr[mid] == 2`

     * Swap `arr[mid]` and `arr[high]`
     * Decrement `high`
     * Do **not** increment `mid` because the swapped element needs to be checked.

---


## 📊 Complexity Analysis

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

The algorithm traverses the array only once and uses constant extra space.

---

## ✅ Features

* One-pass sorting algorithm
* In-place sorting (no extra array required)
* Constant space complexity
* Efficient for arrays containing only `0`, `1`, and `2`

---

## 📚 Concepts Used

* Two/Three Pointer Technique
* Array Manipulation
* Dutch National Flag Algorithm
* In-place Sorting

---

## 👨‍💻 Author

Made with ❤️ using C++ and Python.
