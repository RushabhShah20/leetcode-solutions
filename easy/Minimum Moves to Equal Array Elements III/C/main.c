// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
int minMoves(int *nums, int numsSize)
{
    int ans = 0;
    int x = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (x < nums[i])
        {
            x = nums[i];
        }
    }
    for (int i = 0; i < numsSize; i++)
    {
        ans += (x - nums[i]);
    }
    return ans;
}