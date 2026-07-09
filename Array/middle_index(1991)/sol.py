def middleindex(nums):
    total = 0
    left = 0
    for i in range(len(nums)):
        total +=nums[i]
    for i in range (0,len(nums)):
        right = total - left - nums[i]
        if left == right:
            return i
        left += nums[i]
         
    return -1
    




nums = [1,2,4,3]
ans = middleindex(nums)
print(ans)