// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
int minMoves(int *nums, int numsSize)
{
    const int n = numsSize;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = fmax(mx, nums[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += mx - nums[i];
    }
    return ans;
}