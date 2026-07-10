class NumArray:
    def __init__(self, nums):
        # Create prefix sum array
        self.prefix = nums[:]

        for i in range(1, len(self.prefix)):
            self.prefix[i] = self.prefix[i - 1] + self.prefix[i]

    def sumRange(self, left, right):
        if left == 0:
            return self.prefix[right]
        else:
            return self.prefix[right] - self.prefix[left - 1]


def main():
    nums = [-2, 0, 3, -5, 2, -1]

    # Create object
    obj = NumArray(nums)

    # Queries
    print("sumRange(0, 2) =", obj.sumRange(0, 2))
    print("sumRange(2, 5) =", obj.sumRange(2, 5))
    print("sumRange(0, 5) =", obj.sumRange(0, 5))


if __name__ == "__main__":
    main()