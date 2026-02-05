// Problem: Transformed Array
// Link to the problem: https://leetcode.com/problems/transformed-array/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *constructTransformedArray(int *nums, int numsSize, int *returnSize)
{
    const int n = numsSize;
    int *ans = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[(i + nums[i] % n + n) % n];
    }
    *returnSize = n;
    return ans;
}