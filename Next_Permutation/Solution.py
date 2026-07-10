def next_permutation(nums):
    temp = -1
    n = len(nums)
    for i in range(n-2,-1,-1):
        if nums[i]<nums[i+1]:
            temp = i
            break
    if temp == -1:
        reversed()
        return
        
    for i in range(n-1,temp,-1):
        if nums[i]>nums[temp]:
            s = nums[i]
            nums[i] = nums[temp]
            nums[temp] = s
            break
    nums[temp + 1:] = reversed(nums[temp + 1:])   


nums = [1,2,3]
next_permutation(nums)
print(nums)