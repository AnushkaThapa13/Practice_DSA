def sort_colors(nums):
    low = 0
    high = len(nums)-1
    mid = 0
    
    while mid <= high:
        if(nums[mid]==0):
            temp = nums[mid]
            nums[mid] = nums[low]
            nums[low] = temp
            mid +=1
            low +=1
            
        elif(nums[mid]==1):
            mid +=1
            
        else:
            temp = nums[high]
            nums[mid] = nums[high]
            nums[high] = temp
            high -=1
            
nums = [0,1,2,0,1,2]
sort_colors(nums)
print(nums)