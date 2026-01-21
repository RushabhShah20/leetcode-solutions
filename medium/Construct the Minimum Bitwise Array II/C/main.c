// Problem: Construct the Minimum Bitwise Array II
// Link to the problem: https://leetcode.com/problems/construct-the-minimum-bitwise-array-ii/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *minBitwiseArray(int *nums, int numsSize, int *returnSize)
{
    const int n = numsSize;
    int *ans = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = nums[i] - (((nums[i] + 1) & (-nums[i] - 1)) / 2);
        }
    }
    *returnSize = n;
    return ans;
}