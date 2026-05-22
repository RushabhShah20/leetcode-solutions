// Problem: Search in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/search-in-rotated-sorted-array/
int search(int *nums, int numsSize, int target)
{
    const int n = numsSize;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        const int m = l + (r - l) / 2;
        if (nums[m] == target)
        {
            return m;
        }
        if (nums[m] >= nums[l])
        {
            if (nums[l] <= target && target < nums[m])
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        else
        {
            if (nums[m] < target && nums[r] >= target)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
    }
    return -1;
}