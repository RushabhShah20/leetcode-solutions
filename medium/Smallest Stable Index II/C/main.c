// Problem: Smallest Stable Index II
// Link to the problem: https://leetcode.com/problems/smallest-stable-index-ii/
int firstStableIndex(int *nums, int numsSize, int k)
{
    const int n = numsSize;
    int mn[n], mx[n];
    mx[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        mx[i] = fmax(mx[i - 1], nums[i]);
    }
    mn[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        mn[i] = fmin(mn[i + 1], nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (mx[i] - mn[i] <= k)
        {
            return i;
        }
    }
    return -1;
}