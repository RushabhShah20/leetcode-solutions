// Problem: Minimum Moves to Equal Array Elements
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
int minMoves(int *nums, int numsSize)
{
    const int n = numsSize;
    int ans = 0, mn = 1000000001;
    for (int i = 0; i < n; i++)
    {
        mn = fmin(mn, nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ans += nums[i] - mn;
    }
    return ans;
}