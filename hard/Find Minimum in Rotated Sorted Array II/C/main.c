// Problem: Find Minimum in Rotated Sorted Array II
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
int findMin(int *nums, int numsSize)
{
    const int n = numsSize;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        const int m = l + (r - l) / 2;
        if (nums[m] > nums[r])
        {
            l = m + 1;
        }
        else if (nums[m] < nums[l])
        {
            r = m;
            l++;
        }
        else
        {
            r--;
        }
    }
    const int ans = nums[l];
    return ans;
}