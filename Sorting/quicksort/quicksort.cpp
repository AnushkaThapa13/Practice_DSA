#include<bits/stdc++.h>
using namespace std;

int partitioner(vector<int>& nums, int low, int high)
{
    int pivot = nums[low];

    int i = low;
    int j = high;

    while(i < j)
    {
        while(i <= high && nums[i] <= pivot)
            i++;

        while(j >= low && nums[j] > pivot)
            j--;

        if(i < j)
            swap(nums[i], nums[j]);
    }

    swap(nums[low], nums[j]);

    return j;
}

void quicksort(vector<int>& nums, int low, int high)
{
    if(low < high)
    {
        int pIndex = partitioner(nums, low, high);

        quicksort(nums, low, pIndex - 1);
        quicksort(nums, pIndex + 1, high);
    }
}

int main()
{
    vector<int> nums = {2,1,4,5,8,9,6,7};

    quicksort(nums, 0, nums.size()-1);

    for(int x : nums)
        cout << x << " ";

    return 0;
}