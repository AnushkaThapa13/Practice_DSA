def Left_rightsum(nums):
    
    n = len(nums)
    total_sum = 0
    leftsum = 0
    
    for i in range(n):
        total_sum += nums[i]
    
    left = [0]*n
    for i in range(0,n):
        left[i] = leftsum
        leftsum +=nums[i]
        
    right = [0]*n
    for i in range(0,n):
        right[i] = total_sum -left[i]-nums[i]
    
    temp = [0]* n
    for i in range(0,n):
        temp[i] = abs(left[i]-right[i])
    return temp
    






nums = [1,2,3,4,5]
ans = Left_rightsum(nums)
print(ans)
