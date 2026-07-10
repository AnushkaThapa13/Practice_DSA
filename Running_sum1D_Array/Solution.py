def Running_sum(nums,n):
    for i in range(1,n):
        nums[i] = nums[i-1]+nums[i]
    


nums = [ 1,2,3,4 ,5]
n = len(nums)
Running_sum(nums,n);
print(nums)