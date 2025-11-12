// Problem: Maximum Difference Between Increasing Elements
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-increasing-elements/
int maximumDifference(int *nums, int numsSize)
{
    int n = numsSize, res = 0;
    int pre[n], suff[n];
    pre[0] = nums[0];
    suff[n - 1] = nums[n - 1];
    for (int i = 1; i < n; i++)
    {
        pre[i] = fmin(pre[i - 1], nums[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = fmax(suff[i + 1], nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        res = fmax(res, suff[i] - pre[i]);
    }
    if (res == 0)
        return -1;
    return res;
}