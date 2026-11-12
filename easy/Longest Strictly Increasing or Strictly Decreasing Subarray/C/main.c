// Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
int longestMonotonicSubarray(int *nums, int numsSize)
{
    const int n = numsSize;
    int a = 1, b = 1, c = 1, d = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            c++;
            a = fmax(a, c);
            d = 1;
        }
        else if (nums[i] < nums[i - 1])
        {
            d++;
            b = fmax(b, d);
            c = 1;
        }
        else
        {
            c = 1;
            d = 1;
        }
    }
    const int ans = fmax(a, b);
    return ans;
}