// Problem: Squares of a Sorted Array
// Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    const int n = numsSize;
    *returnSize = numsSize;
    int *ans = (int *)malloc(numsSize * sizeof(int));
    int l = 0, r = n - 1, i = n - 1;
    while (l <= r)
    {
        const int x = nums[l] * nums[l], y = nums[r] * nums[r];
        if (x > y)
        {
            ans[i] = x;
            l++;
        }
        else
        {
            ans[i] = y;
            r--;
        }
        i--;
    }
    return ans;
}