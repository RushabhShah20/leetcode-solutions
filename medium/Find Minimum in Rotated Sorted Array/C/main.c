// Problem: Find Minimum in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
int findMin(int *nums, int numsSize)
{
    const int n = numsSize;
    int ans = 5001, l = 0, r = n - 1;
    while (l <= r)
    {
        const int m = l + (r - l) / 2;
        if (nums[l] <= nums[m])
        {
            ans = fmin(ans, nums[l]);
            l = m + 1;
        }
        else
        {
            r = m - 1;
            ans = fmin(ans, nums[m]);
        }
    }
    return ans;
}