// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *leftRightDifference(int *nums, int numsSize, int *returnSize)
{
    const int n = numsSize;
    int *ans = (int *)malloc(n * sizeof(int));
    int *left = (int *)malloc(n * sizeof(int));
    int *right = (int *)malloc(n * sizeof(int));
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        left[i] = sum;
        sum += nums[i];
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        right[i] = sum;
        sum += nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        int diff = left[i] - right[i];
        ans[i] = diff < 0 ? -diff : diff;
    }
    free(left);
    free(right);
    *returnSize = n;
    return ans;
}