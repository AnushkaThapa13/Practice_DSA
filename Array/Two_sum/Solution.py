def two_sum(nums, target):
    seen = {}

    for i, num in enumerate(nums):
        value = target - num

        if value in seen:
            return [seen[value], i]

        seen[num] = i

    return []


nums = [1, 2, 3, 4, 5]
target = 4

result = two_sum(nums, target)
print(result)